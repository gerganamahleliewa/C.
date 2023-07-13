#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <inttypes.h>


//function to change in character to hex number
uint8_t HexToBin(char ascii) {

        switch (tolower(ascii)) {
            case '0':
                return 0;
            case '1':
                return 1;
            case '2':
                return 2;
            case '3':
               return 3;
            case '4':
                return 4;
            case '5':
               return 5;
            case '6':
               return 6;
            case '7':
                return 7;
            case '8':
                return 8;
            case '9':
                return 9;
            case 'a':
                return 0x0A;
            case 'b':
               return 0x0B;
            case 'c':
               return 0x0C;
            case 'd':
                return 0x0D;
            case 'e':
                return 0x0E;
            case 'f':
                return 0x0F;
            default:
                break;
        }

}

void removeSpaceTabNewLine(char *str)
{
    char *s =str;
    char* new = str;

    while(*s)
    {
        if((*s) != ' ' && (*s) != '\n' && (*s) != '\t')
        {
            *new = *s;
            new++;
        }
        s++;
    }
    *new = '\0';
}
//function to print value
void print_value(uint8_t *value, uint16_t length) {

    printf("Value = ");
    for (int i = 0; i < length; ++i) {
        printf("%02X ", value[i]);
    }
    printf("\n");
}


void parse_TLV(uint8_t *p,int len)
{
    int index = 0;
    uint32_t tag = 0;
    uint16_t length = 0;
    uint8_t *value = &p[index];

//check is empty
    if(len <= 0)
    {
        return;
    }

    //get tag
    tag = p[0];

    int constructed = 0;

    if (tag & 0x20)
    {
        constructed = 1;
        printf("Constructed\n");
    }
    else
    {
        printf("Primitive\n");
    }

    //check tag if last 5 bits are one
    if((tag & 0x1F ) == 0x1F )
    {
        //check if next index 8 bit is 1
        while((p[index++] & 0x80) == 0x80)
        {
            //tag is more than one byte
            tag = ((tag << 8) | p[index]);
        }
        printf("Tag = %X\n",tag);
    }else{
        printf("Tag = %X\n",tag);
        index++;
    }

     length = p[index];

     uint8_t  l;

//check if 8 bit in length is set
        if((length & 0x80))
        {
            //how long is the length
            l = (length & 0x7F);
            length = 0;
            while(l != 0)
            {
                length = ((length << 8) | p[index]);
                l--;
            }

        }  printf("Length = %X\n",length);
         ++index;

         //call function to print value of tags
        print_value(&p[index],  length);


        while(index < len) {

            if (constructed == 1) {
                //recursion call for next tags
                parse_TLV(&p[index], length);
                index += length;
            } else
            {
                parse_TLV(&p[index + length], len - (index + length));
                break;
            }

        }
}

int main() {

    char packet[500];
    uint8_t newPacket[500];
    printf("Enter packet of data:");
    fgets(packet, sizeof(packet), stdin);


    removeSpaceTabNewLine(packet);
//find size
    int size = strlen(packet);
    int newSize = size/2;

    //check if is even number
    if ((newSize) % 2 == 0) {
        printf("%s \n", packet);

    }else {
        printf("Must be an even number of hexadecimal digits\n");
    }


    int i = 0, j = 0, mask;
    uint8_t temp;

    //read character symbol by symbol
    while (packet[i] != '\0') {
        
        if (j < i) {
            //newPacket gets two number from packet
            temp = newPacket[j];
            mask = (temp << 4) | HexToBin(packet[i]);
            newPacket[j] = mask;
            ++j;
            ++i;
        }
        newPacket[j] = HexToBin(packet[i]);
        i++;
    }

  //call function to parse
    parse_TLV(newPacket,newSize);
    
    return 0;
}
