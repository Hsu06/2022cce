  #include <stdio.h>
  int main()
  {
  float a,b,bmi;
  printf("�п�J����(����):");
  scanf("%f" ,&a);
  printf("�п�J�魫(����):") ;
  scanf("%f",&b);
  bmi=b/(a*a);
  printf("BMI=%.2f\n",bmi);
  if(bmi<18.5)
  printf("�ӽG�o");
  else if (18.5<=bmi&&bmi<24)
  printf("�зǳ�");
  else printf("�ӭD�o");
  }
