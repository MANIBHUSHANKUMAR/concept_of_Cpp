// // 01 write a program in c++ to print text on aseprate line.
// /*#include<iostream>
// using namespace std;
// int main(){
//     cout<<"\n\nprint a welcome text";
//     cout<<"\nwelcome";
//     return 0;
// }*/


// 2 write a program in c++ to print the sum of two numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    sum = a+b;
    cout<<"the sum of a and b is : "<<sum;
    return 0;
}


//3 write a c++ program to find the size of fundamental data types.
/*#include<iostream>
using namespace std;
int main(){
    cout<<"find the size of fundamental data types: \n";
    cout<<"the size of (char) is: "   <<sizeof(char)<<"bytes \n";
    cout<<"the size of (short) is: "   <<sizeof(short)<<"bytes \n";
    cout<<"the size of (int) is: "   <<sizeof(int)<<"bytes \n";
    cout<<"the size of (long) is: "   <<sizeof(long)<<"bytes \n";
    cout<<"the size of (long long) is: "   <<sizeof(long long)<<"bytes \n";
    cout<<"the size of (float) is: "   <<sizeof(float)<<"bytes \n";
    cout<<"the size of (double) is: "   <<sizeof(double)<<"bytes \n";
    cout<<"the size of (long double) is: "   <<sizeof(long double)<<"bytes \n";
    cout<<"the size of (bool) is: "   <<sizeof(bool)<<"bytes \n";



    return 0;
}*/


//5 write a c++ program to check the upper and lower limits of integers.
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    cout<<UINT_MAX<<endl;
    cout<<LLONG_MAX<<endl;
    cout<<LLONG_MIN<<endl;
    cout<<ULLONG_MAX<<endl;
    cout<<CHAR_MAX<<endl;
    return 0;
}*/


//6 write a c++ program that checks whether primitive value cross the limit;
/*#include<iostream>
using namespace std;
int main(){
    char gender='f';
    bool isemployed = true;
    unsigned short numofsons = 2;
    short yearofAppt = 2009;
    unsigned int YearlyPackage = 15000000;
    double height = 79.48;
    float gpa = 4.69f;
    long totalDrawan = 12047235L;
    cout<<gender<<endl;
    cout<<isemployed<<endl;
    cout<<numofsons<<endl;
    cout<<yearofAppt<<endl;
    cout<<YearlyPackage<<endl;
    cout<<height<<endl;
    cout<<gpa<<endl;
    cout<<totalDrawan<<endl;
    return 0;
}*/



//07 write a c++ program that displays mixed datatype and arithmetic operations.
/*#include<iostream>
using namespace std;
int main(){
    int a,b,sum,diff,prod,div,rem;
    cout<<"enter the value of a: \n";
    cin>>a;
    cout<<"enter the value of b: \n";
    cin>>b;
    sum = a+b;
    cout<<"the sum of a and b is: "<<sum<<endl;
    diff = a-b;
    cout<<"the difference of a and b is: "<<diff<<endl;
    prod = a*b;
    cout<<"the product of a and b is: "<<prod<<endl;
    div=a/b;
    cout<<"the division of a and b is: "<<div<<endl;
    rem=a%b;
    cout<<"the remainder of a and b is: "<<rem<<endl;

}*/



//08  write a c++ program to check overflow/underflow during various arithmetic operations.
/*#include<iostream>
using namespace std;
int main(){
    int n1 = 2147483647;
    cout<<"overflow the integer range and set in minimum range: "<<n1 + 1<<endl;
    cout<<"increasing from its minimum range: "<<n1 +2<<endl;
    cout<<"product is: "<<n1*n1<<endl;
    int n2 = -2147483648;
    cout<<"underflow the range and set in maximum range: "<<n2-1<<endl;
    cout<<"decreasing from its maximum range: "<<n2-2<<endl;
    cout<<"product is: "<<n2*n2<<endl;
    cout<<endl;
    return 0;
}*/



//09 write a c++ program to display the operation of pre and post increment and decrement.
/*#include<iostream>
using namespace std;
int main(){
    int num = 57;
    cout<<"the number is: "<<num<<endl;
    num++;
    cout<<"After post increment by 1 the number is: "<<num<<endl;
    ++num;
    cout<<"after pre increment by 1 number is: "<<num<<endl;
    num = num+1;
    cout<<"after increasing by 1 number is: "<<num<<endl;
    num--;
    cout<<"after post decrement by 1 number is: "<<num<<endl;
    --num;
    cout<<"After pre decrement by 1 number is: "<<num<<endl;
    num = num-1;
    cout<<"after decreasing by 1 the number is: "<<num<<endl;
    cout<<endl;
    return 0;
}*/


//11 write a c++ program to print the result of the specified operations;
/*#include<iostream>
using namespace std;
int main(){
    cout<<"print the result of the specified operators: "<<endl;
    cout<<"the value of this operation is: "<<34*67+68-123%2<<endl;
    cout<<"the value of this operation is: "<<48%3-243+696<<endl;
    cout<<"the value of this operation is: "<<857-932+833/4<<endl;
    return 0;
}*/



//12 write a c++ program to add two numbers and accept them from the keyboard.
/*#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"enter first input: "<<endl;
    cin>>a;
    cout<<"enter second input: "<<endl;
    cin>>b;
    sum = a+b;
    cout<<"the sum of a and b is: "<<sum<<endl;
    return 0;
}*/


//13 write a c++ program that swaps two number;
/*#include<iostream>
using namespace std;
int main(){
    int i,j,temp;
    cout<<"enter the first input: "<<endl;
    cin>>i;
    cout<<"enter the second input: "<<endl;
    cin>>j;
    cout<<"before swaping the number is: "<< i<<" "<<j<<endl;
    temp = i;
    i = j;
    j = temp;
    cout<<"after swaping the number is: "<<i<<" "<<j;
    return 0;
}*/




// 14 write a c++ program that calculates the volume of sphere.
/*#include<iostream>
using namespace std;
int main(){
    float r,volum_of_sphere;
    cout<<"enter the radius of the sphere: "<<endl;
    cin>>r;
    volum_of_sphere = (4*3.14*r*r*r)/3;
    cout<<"the volume of the sphere is: "<<volum_of_sphere<<endl;
    return 0;
}*/




//15 write a c++ program that calculates the volume of a cube;
/*#include<iostream>
using namespace std;
int main(){
    int side,vol_of_cube;
    cout<<"enter the side of the cube is: "<<endl;
    cin>>side;
    vol_of_cube = (side*side*side);
    cout<<"the volume of the cube is: "<<vol_of_cube<<endl;
    
    return 0;
}*/



//16 write a c++ program to calculate of volume of cylinder;
/*#include<iostream>
using namespace std;
int main(){
    int r,h;
    float vol_of_cylinder;
    cout<<"enter the radius of the cylinder: "<<endl;
    cin>>r;
    cout<<"enter the height of the cylinder: "<<endl;
    cin>>h;
    vol_of_cylinder = (3.14*r*r*h);
    cout<<"the volume of cylinder is: "<<vol_of_cylinder<<endl;
    return 0;
}*/



//17 write a c++ program to find Area and perimeter of a rectangle.
/*#include<iostream>
using namespace std;
int main(){
    int length,width,perimeter,area;
    cout<<"enter the length: "<<endl;
    cin>>length;
    cout<<"enter the width: "<<endl;
    cin>>width;
    area= (length*width);
    perimeter = 2*(length+width);
    cout<<"area of rectangle: "<<perimeter<<endl;
    cout<<"perimeter of rectangle: "<<area<<endl;
    return 0;
}*/



//18 write a program to find area of any triangle using herons formula;
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int side1,side2,side3,area,s;
    cout<<"enter the first side: "<<endl;
    cin>>side1;
    cout<<"enter the second side: "<<endl;
    cin>>side2;
    cout<<"enter the third side: "<<endl;
    cin>>side3;
    s = (side1+side2+side3)/2;
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<"the area of triangle by using herons formula: "<<area<<endl;
    return 0;
}*/



//19 write a program to find the area and circumference of a circle.
/*#include<iostream>
using namespace std;
int main(){
    int r,area,circumference_of_circle;
    cout<<"enter the radius: "<<endl;
    cin>>r;
    area = (3.14*r*r);
    cout<<"area of circle is: "<<area<<endl;
    circumference_of_circle = 2*(3.14*4);
    cout<<"perimeter of circle is: "<<circumference_of_circle<<endl;

    return 0;
}*/


//20 write a c++ program  to convert temperature in celcius to fahrenheit.
/*#include<iostream>
using namespace std;
int main(){
    float frh,cel;
    cout<<"input the temperature in celcius: ";
    cin>>cel;
    frh = (cel*9.0)/5.0 + 32;
    cout<<"the temperature in celcius : "<<cel<<endl;
    cout<<"the temperature in fahrenheit: "<<frh<<endl;
    cout<<endl;
    return 0;
}*/


//21 write a c++ program to convert t temperature in fahrenheit to celcius;
/*#include<iostream>
using namespace std;
int main(){
    float frh,cel;
    cout<<"input the temperature in fahrenheit: ";
    cin>>frh;
    cel = ((frh*5.0)-(5.0*32))/9;
    cout<<"the temperature in fahrenheit: "<<frh<<endl;
    cout<<"the temperature in celcius: "<<cel<<endl;
    cout<<endl;
}*/



//22 write a c++ program to find the third angle of triangle .
/*#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter the side first: "<<endl;
    cin>>s1;
    cout<<"enter the side second: "<<endl;
    cin>>s2;
    s3 = 180-(s1+s2);
    cout<<"the third side of the triangle is: "<<s3<<endl;
    return 0;
}*/



//23 write a c++ program to convert kilometers per hour to miles per hour;
/*#include<iostream>
using namespace std;
int main(){
    int kmph,miph;
    cout<<"input the distance in kilometer: ";
    cin>>kmph;
    miph = (kmph*0.6213712);
    cout<<"the "<< kmph<<"km./hr.means "<<miph<<" miles/hr."<<endl;
    return 0;
}*/



//28 write a c++ program to find the area of the scalene triangle.
/*#include<iostream>
#include<math.h>
#define PI 3.14159
using namespace std;
int main(){
    float side1,side2,ang1,area;
    cout<<"input the length of a side of the triangle: ";
    cin>>side1;
    cout<<"input the length of another side of the triangle: ";
    cin>>side2;
    cout<<"input the angle between these side of the triangle: ";
    cin>>ang1;
    area = (side1*side2*sin((PI/180)*ang1))/2;
    cout<<"the area of the scalene triangle: "<<area<<endl;
    return 0;
}*/


//29 write a c++ program to compute the quotient and remainder.
/*#include<iostream>
using namespace std;
int main(){
    int quo,rem,a,b;
    cout<<"input the dividend: "<<endl;
    cin>>a;
    cout<<"input the divisor: "<<endl;
    cin>>b;
    quo = a/b;
    cout<<"the quotient of the division is: "<<quo<<endl;
    rem = a%b;
    cout<<"the remainder of the division is: "<<rem<<endl;
    return 0;
}*/



//30 write a c++ program to compute the total and average of four numbers.
/*#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,avg;
    cout<<"enter the input of first number: "<<endl;
    cin>>i;
    cout<<"enter the input of second number: "<<endl;
    cin>>j;
    cout<<"enter the input of the third number: "<<endl;
    cin>>k;
    cout<<"enter the input of fourth number: "<<endl;
    cin>>l;
    avg = (i+j+k+l)/4;
      cout<<"the average value of total number is: "<<avg<<endl;
    return 0;
}*/



//31 write a c++ program to input a single digit number and print it in a rectangular form of 4 columns and 6 rows.
/*#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter the input: "<<endl;
    cin>>i;
    cout<<endl;
    cout<<i;
    cout<<i;
    cout<<i;
    cout<<i;
    cout<<i<<" "<<" "<<" "<<i<<endl;
    cout<<i<<" "<<" "<<" "<<i<<endl;
    cout<<i<<" "<<" "<<" "<<i<<endl;
    cout<<i<<" "<<" "<<" "<<i<<endl;
    cout<<i;
    cout<<i;
    cout<<i;
    cout<<i;
     return 0;
}*/


//32 write a c++ program to check whether a number is positive ,negative or zero;
/*#include<iostream>
using namespace std;
int main(){
    int i,pos,neg,zero;
    cout<<"enter the input of the user: "<<endl;
    cin>>i;
    if(i>0){
        cout<<"positive";
    }
    else if(i<0){
        cout<<"negative";
    }
    else if(i==0){
        cout<<"zero";
    }
    else{
        cout<<"default";
    }
    return 0;
}*/


// 33 write a c++ program to divide two numbers  and print them on the screen.
/*#include<iostream>
using namespace std;
int main(){
    int i,j;
    cout<<"enter the divisor: "<<endl;
    cin>>i;
    cout<<"enter the dividend: "<<endl;
    cin>>j;
   int divide = i/j;
   cout<<"the expected result: "<<divide<<endl;
    return 0;
}*/


//34 write a c++ program to display a current date and time;
 
/***********************problem**********************************************/


//35 write a c++ to compute the specified expresssion and print output.
/*#include<iostream>
using namespace std;
int main(){
    cout<<"the specified expression is (23*57-45+36*45)/(46*56-23+47): "<<(23*57-45+36*45)/(46*56-23+47)<<endl; 
    return 0;
}*/


// 37 write a c++ program to print a mystery series from 1 to 50;
/*#include<iostream>
using namespace std;
int main(){
cout<<"the series are: "<<endl;
int num1 = 1;
while (true){
    ++num1;
    if((num1%3)==0)
    continue;
    if(num1==50)
    break;
    if((num1%2)==0){
        num1 +=3;
    }
    else{
        num1 -=3;
    }
    cout<<num1<<" ";
}

    return 0;
}*/



//38  write a c++ program that takes a number as input and prints its multiplication table up to 10;
/*#include<iostream>
using namespace std;
int main(){
    int i,a;
    cout<<"enter the user number of table: ";
    cin>>a;
    for(i=1;i<=10;i++){
        cout<<a<<"*"<<i<<"="<<i*a<<endl;
    }
    return 0;
}*/



//39 write a c++ program to print the following pattern.
/*#include<iostream>
using namespace std;
int main(){
    cout<<"XXXXX"<<endl;
    cout<<"x   x"<<endl;
    cout<<"x"<<endl;
    cout<<"x"<<endl;
    cout<<"x"<<endl;
    cout<<"x   x"<<endl;
    cout<<"XXXXX"<<endl;

    return 0;
}*/


//40 write a c++ program to print the area and perimeter of a rectangle.
/*#include<iostream>
using namespace std;
int main(){
    int perimeter,area,len,bre;
    cout<<"enter the length: "<<endl;
    cin>>len;
    cout<<"enter the breadth: "<<endl;
    cin>>bre;
    perimeter = 2*(len+bre);
    cout<<"the perimeter of rectangle is: "<<perimeter<<endl;
    area = (len*bre);
    cout<<"the area  of rectangle is: "<<area<<endl;

    return 0;
}*/


//42 write a c++ program that accepts the users first and last name and prints them in reverse order with a space between them;/*
/*#include<iostream>
using namespace std;
int main(){
    char firname[30],lstname[30];
    cout<<"enter the first name: "<<endl;
    cin>>firname;
    cout<<"enter the last name: "<<endl;
    cin>>lstname;
    cout<<"reverse order of name: "<<lstname<<" "<<firname<<endl;
    return 0;
}*/


//43 write a c++ program that accepts the radius of a circle from the user and computes the area and circumferences.
/*#include<iostream>
using namespace std;
int main(){
    int rad,area_of_circum;
    cout<<"enter the input of radius: "<<endl;
    cin>>rad;
    area_of_circum = (2*3.14*rad*rad);
    cout<<"the area of circumference of circle: "<<area_of_circum<<" unit"<<endl;
    return 0;
}*/


//44 write  a c++ program to get the volume of a sphere with radius 6.
/*#include<iostream>
using namespace std;
int main(){
    int r;
    float volum_of_sphere;
    cout<<"enter the radius of sphere: "<<endl;
    cin>>r;
    volum_of_sphere = (4*3.14*r*r*r)/3;
    cout<<"the volume of sphere is: "<<volum_of_sphere<<endl;
    return 0;
}*/



//45 write a c++ program to calculate the volume of cone.
//vol of cone= (1*pi*r*r*h)/3
/*#include<iostream>
using namespace std;
int main(){
    int r,h;
    float vol_of_cone;
    cout<<"enter the radius of the cone: "<<endl;
    cin>>r;
    cout<<"enter the height of the cone: "<<endl;
    cin>>h;
    vol_of_cone = (1*3.14*r*r*h)/3;
    cout<<"the volume of cone is: "<<vol_of_cone<<endl;


    return 0;
}*/


//46 write a c program to calculate volume of cylinder;
/*#include<iostream>
using namespace std;
int main(){
    int r,h;
    float vol_of_cylinder;
    cout<<"enter the radius of the cylinder: "<<endl;
    cin>>r;
    cout<<"enter the height of the cylinder: "<<endl;
    cin>>h;
    vol_of_cylinder = (3.14*r*r*h);
    cout<<"the volume of the cylinder: "<<vol_of_cylinder;

    return 0;
}*/



//47 write a c++ program to calculate the sum of all even and odd numbers in an array: 
/*#include<iostream>
using namespace std;
int main(){
    int arr[6]={50,44,45,56,67,78};
    int i,oddsum=0,evensum=0;
    for(i=0;i<6;i++){
        if(arr[i]%2==0){
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
    }
    cout<<"the sum of odd numbers are: "<<oddsum<<endl;
    cout<<"the sum of even numbers are: "<<evensum<<endl;
    return 0;
}*/


//48 write a c++ program that swaps two variables without using third variable;
/*#include<iostream>
using namespace std;
int main(){

int swap,i,j;
cout<<"enter first number: "<<endl;
cin>>i;
cout<<"enter second number: "<<endl;
cin>>j;
cout<<"before swaping the number is: "<<i<<" "<<j<<endl;
cout<<"after swaping the number is: "<<j<<" "<<i<<endl;
    return 0;
}*/


//49 write a c++ program to print the code(ascii code/unicode etc.)of a given character.
/*#include<iostream>
using namespace std;
int main(){
    char sing_ch;
    cout<<"input a character: "<<endl;
    cin>>sing_ch;
    cout<<"the ASCII value of"<<sing_ch<<"is: "<<(int)sing_ch<<endl;
    cout<<"the character for the ASCII value "<<(int)sing_ch<<"is: "<<(char)((int)sing_ch)<<endl<<endl;
    return 0;
}*/



//52 write a c++ program to enter two angles of a triangle and find third angle.
/*#include<iostream>
using namespace std;
int main(){
    int angle1,angle2,angle3;
    cout<<"enter first angle of a triangle: "<<endl;
    cin>>angle1;
    cout<<"enter the second angle of a triangle: "<<endl;
    cin>>angle2;
    angle3 = 180-(angle1+angle2);
    cout<<"the third angle is : "<<angle3<<endl;
    return 0;
}*/



//53 wtite a c++ program to find area of equilateral triangle
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float side,area_0f_equilateral;
    cout<<"enter the side of the triangle: "<<endl;
    cin>>side;
    area_0f_equilateral=(sqrt(3*side*side)/4);
    cout<<"area of equilateral triangle: "<<area_0f_equilateral;
    return 0;
}*/




//54 write a c++ program to enter P,T,R and calculate simple intrest;
/*#include<iostream>
using namespace std;
int main(){
    int p,t,r,i;
    cout<<"enter the user input principle: "<<endl;
    cin>>p;
    cout<<"enter the user input time: "<<endl;
    cin>>t;
    cout<<"enter the user input rate: "<<endl;
    cin>>r;
    i = (p*t*r)/100;
    cout<<"the simple intrest for the amount is: "<<i<<endl;
    return 0;
} */



//55 write a c++ program to enter P,T,R and calculate compound intrest.
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float p,r,t,cp,ci;
    cout<<"enter principal: "<<endl;
    cin>>p;
    cout<<"enter rate: "<<endl;
    cin>>r;
    cout<<"enter time: "<<endl;
    cin>>t;
    ci = p*pow((1+r/100),t)-p;
    cp = p*pow((1+r/100),t);
    cout<<"the intrest after compound for the amount: "<<ci<<endl;
    cout<<"the total amount after compounded for the amount: "<<cp<<endl;
}*/



//57  write a c++ program  to  print area of a hexagon.
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float ar,s;
    cout<<"input the side of hexagonal: "<<endl;
    cin>>s;
    ar = (6*(s*s))/(4*tan(M_PI/6));
    cout<<"the area of hexagonal: "<<ar<<endl;
    return 0;

}*/



//58 write a c++ pprogram to print area of polygon;
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float ar,s,n;
    cout<<"enter the number of side of the polygon: "<<endl;
    cin>>n;
    cout<<"enter the length of each side of the polygon: "<<endl;
    cin>>s;
    ar = (n*(s*s))/(4.0*tan(M_PI/n));
    cout<<"area of polygon: "<<ar<<endl;

    return 0;
}*/



//59 write a c++ program compute the distance between two point on the surface of earth;
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double d,la1,la2,lo1,lo2,er,r;
    cout<<"enter the latititude1: "<<endl;
    cin>>la1;
    cout<<"enter the latitude2: "<<endl;
    cin>>la2;
    cout<<"enter the longitude1: "<<endl;
    cin>>lo1;
    cout<<"enter the longitude2: "<<endl;
    cin>>lo2;
    r = 0.01745327;
    la1 = la1*r;
    la2 = la2*r;
    lo1 = lo1*r;
    lo2 = lo2*r;
    er = 6371.01;
    d = er*acos((sin(la1)*sin(la2))+(cos(la1)*cos(la2)*(lo1-lo2)));
    cout<<"the distance between those point is: "<<d<<"\n";
    return 0;
}*/



//60 write a c++ program to add two binary number.
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long bn1,bn2;
    int i=0,r= 0;
    int sum[20];
    cout<<"input the first binary number: "<<endl;
    cin>>bn1;
    cout<<"input the second binary number: "<<endl;
    cin>>bn2;
    while(bn1 !=0 || bn2 !=0){
        sum [i++]=(int)((bn1%10+bn2%10+r)%2);
        r = (int)((bn1%10+bn2%10+r)/2);
        bn1 = bn1/10;
        bn2 = bn2/10;

    }
    if(r!=0){
        sum[i++]=r;
    }
    --i;
    cout<<"the sum of two number is: ";                                  
    while(i>=0){
        cout<<(sum[i--]);
    }
    cout<<"\n";
}*/


//61 write a c++ program to swap the first and last digits of any number.
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,first,last,sum,digits,nn,a,b;
    cout<<"\n\nfind the number after swappping the first and last digit:\n";
    cout<<"input any number";
    cin>>n;
    digits = (int)log10(n);
    first = n/pow(10,digits);
    last  = n%10;
    a = first *(pow(10,digits));
    b = n%a;
    n = b/10;
    nn = last*(pow(10,digits))+(n*10+first);
    cout<<"\n\nthe number after swapping the first and last digit are:"<<nn<<endl;

}*/


































