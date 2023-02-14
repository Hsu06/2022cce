  #include <stdio.h>
  int main()
  {
  float a,b,bmi;
  printf("請輸入身高(公尺):");
  scanf("%f" ,&a);
  printf("請輸入體重(公斤):") ;
  scanf("%f",&b);
  bmi=b/(a*a);
  printf("BMI=%.2f\n",bmi);
  if(bmi<18.5)
  printf("太瘦囉");
  else if (18.5<=bmi&&bmi<24)
  printf("標準喔");
  else printf("太胖囉");
  }
