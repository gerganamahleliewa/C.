

int main() {


    int count[26]={0},i;
    char arr[8]={'C','L','C','C','C','C','A','Z'};
    int max=0;

   for( i = 0 ;i < 8 ;++i)
   {
     //search uppercase alpha that is why is -65
       count[arr[i]-65]++;
   }
    printf("%d\n",count[0]);


   for(i = 0; i < 26;++i) {
//search for max appears in array
       if (count[i] > count[max]) {
           max = i;
       }

   }
    printf("Character with max appears is %c",max+65);
    return 0;
}



