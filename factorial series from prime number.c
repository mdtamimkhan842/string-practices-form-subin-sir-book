int main()
{
    int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int sum = 0;

    for(int n = 1; n<=100; n++){
        printf("%d! = ", n);
    for(int i = 0; i < 25; i++){
        for(int j = 1; j <= n; j++){
            if((j*pow(a[i],1))<=n) sum++;
            if((j*pow(a[i],2))<=n) sum++;
            if((j*pow(a[i],3))<=n) sum++;
            if((j*pow(a[i],4))<=n) sum++;
            if((j*pow(a[i],5))<=n) sum++;
            if((j*pow(a[i],6))<=n) sum++;
      }
      if(sum!=0)
      printf("(%d,%d),",a[i], sum);
        sum = 0;
      }
       printf("\n");
    }
}
