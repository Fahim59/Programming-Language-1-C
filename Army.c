#include <stdio.h>
void main()
{int weight,age;
float height;
char ms,gender;
scanf("%f %d %d %c %c",&height,&weight,&age,&ms,&gender);
if ((height>=5.5&&weight<=50&&(age>=18&&age<=21)&&ms=='s'&&gender=='m')||(height>=5.2&&weight<=45&&(age>=18&&age<=20)&&ms=='s'&&gender=='f'))
    printf("eligible");
else
    printf ("not eligible");
}


