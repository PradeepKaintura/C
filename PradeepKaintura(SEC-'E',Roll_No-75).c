#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void calculator();
void largest_in_three_number();
void smallest_in_three_number();
void sum_of_natural_numbers();
void swap_value();
void swap_reference();
void reverse();
void pallindrome();
void check_vowel(char *);
void check_consonant(char *);
void remspace(char *);
void countspace(char *);
void switchupperlower(char *);
void searchstr(char *);
void revword(char *);
void initials(char *);
void inc_char(char *);
void String_len(char *);
void copy_str(char *);
void concat_String(char*);
void print_ascii(char *);
void count_upper(char *);
void count_lower(char *);
void count_special_char(char *);
void find_replace(char *);
void factorial();
void armstrong();
void digit_pallindrome();
void digit_reverse();
void fibonacci();
void prime();
void digitsum();
void bubble_sort();
void selection_sort();
void insertion_sort();
void sum_of_array_element();
void smallest_in_array();
void largest_in_array();
void trace_of_matrix();
void matrix_multiplication();
void array_reverse();
void convert_Degree_to_Fahrenheit();
void average_of_array();
void convert_Fahrenheit_to_degree();
void second_Largest_in_array();
void second_Minimum_in_array();
void Odd();
void Even();
void sum_of_odd();
void sum_of_even();
void Odd_series();
void Even_Series();
float fact(int );
void leap_year();
void exponential_series();
void mul_table();
void rmul_Space();
void word_count();
void sum_prime();
void sum_prime_range();
void simple_interest();
void digit_word();
void linear_search();
void binary_search();
void square_series();
void cube_series();
void in_integer_series();
void power();
void permutation();
void combination();
void deci_binary();
void deci_octal();
void binary_deci();
void octal_deci();
void remove_repeating_digits();
void di_prim_sec_trace();
void strong_number();
void perfect_number();
void friendly_pair();
void automorphic_number();
void harshad_number();
void factors();
void quad_equation();
void mat_addition();
void sum_digits_array();
void pascals_triangle();
void area_of_circle();
void floyds_triangle();
void rst(); 
void isp();
void check();
void quadrant();
void co_digits();
void pytha();
void triangularnumber();
void areatriangle();
void specialnumber();

int main()
{
    int k,c;
    loop1:
    printf("Press 1 For Integer Programs\nPress 2 For String Programs \nPress 3 For Sorting using dynamic memory allocation\n");
    printf( "Press 4 For Array Program\nPress 5 For Series Question\nPress 6 For Patterns\n");
    scanf("%d",&k);
    printf("----------------------------------------------------------------------\n");
    switch(k)
    {  
        case 1:{//programs for integer
                printf("Press 1 For Armstrong\nPress 2 for Factorial\nPress 3 For Digit Pallindrome\nPress 4 For DIgit Reverse\nPress 5 For Prime\n");
                printf("Press 6 For Leap Year\nPress 7 FOr Digits SUm\nPress 8 FOr Swap \nPress 9 For Sum of Natural Number\nPress 10 For Largest in three Numbers\n");
                printf("Press 11 For Smallest in three Number\nPress 12 For Convert Degree to Fahrenheit\nPress 13 For Simple Calculator\nPress 14 For Convert Fahrenheit to Degree\n");
                printf("Press 15 For Odd Number Test\nPress 16 FOr Even NUmber Test\nPress 17 FOr Sum of Odd NUmbers\nPress 18 For Sum of Even NUmbers\nPress 19 For Multiplication Table\n");
                printf("Press 20 For Sum of Prime Numbers\nPress 21 For Sum of the Prime in range of the numbers\nPress 22 FOr Simple Interset\nPress 23 For Digit in words\nPress 24 For finding te power of the number\n");
                printf("Press 25 For Permutation\nPress 26 For Combination\nPress 27 for converting Decimal to Binary\nPress 28 For converting Decimal to Octal\nPress 29 For converting binary to decimal\n");
                printf("Press 30 For converting octal to decimal\nPress 31 For testing whether a number is strong number or not\nPress 32 For testing whether a number is perfect number or not\n");
                printf("Press 33 For testing whether the numbers are friendly paired or not\nPress 34 For testing whether the number is automorphic or not\nPress 35 For testing whether a number is harshad number or not\n");
                printf("Press 36 For printing the factors\nPress 37 For finding the roots of the quadratic equations\nPress 38 For finding the areaof the circle\nPress 39 For Checking whether a number is positive or negative\n");
                printf("Press 40 For finding in which quadrant the coordinates lies\nPress 41 For counting how many times a number repeates itself in the range of the given number\nPress 42 For printing pythagoras triplets\n");
                printf("Press 43 For Printing the number of balls required to made a trinagle\nPress 44 For Getting the area of the triangle\nPress 45 For checking the special number\nPress 0 to quit\n");
                    scanf("%d",&c);
                printf("----------------------------------------------------------------------\n");
                    switch(c)
                    {   case 0:goto loop1;break;
                        case 1:armstrong();break;
                        case 2:factorial();break;
                        case 3:digit_pallindrome();break;
                        case 4:digit_reverse();break;
                        case 5:prime();break;
                        case 6:leap_year();break;
                        case 7:digitsum();break;
                        case 8:swap_value();break;
                        case 9:sum_of_natural_numbers();break;
                        case 10:largest_in_three_number();break;
                        case 11:smallest_in_three_number();break;
                        case 12:convert_Degree_to_Fahrenheit();break;
                        case 13:calculator();break;
                        case 14:convert_Fahrenheit_to_degree();break;
                        case 15:Odd();break;
                        case 16:Even();break;
                        case 17:sum_of_odd();break;
                        case 18:sum_of_even();break;
                        case 19:mul_table();break;
                        case 20:sum_prime();break;
                        case 21:sum_prime_range();break;
                        case 22:simple_interest();break;
                        case 23:digit_word();break;
                        case 24:power();break;
                        case 25:permutation();break;
                        case 26:combination();break;
                        case 27:deci_binary();break;
                        case 28:deci_octal();break;
                        case 29:binary_deci();break;
                        case 30:octal_deci();break;
                        case 31:strong_number();break;
                        case 32:perfect_number();break;
                        case 33:friendly_pair();break;
                        case 34:automorphic_number();break;
                        case 35:harshad_number();break;
                        case 36:factors();break;
                        case 37:quad_equation();break;
                        case 38:area_of_circle();break;
                        case 39:check();break;
                        case 40:quadrant();break;
                        case 41:co_digits();break;
                        case 42:pytha();break;
                        case 43:triangularnumber();break;
                        case 44:areatriangle();break;
                        case 45:specialnumber();break;
                        
                    }
                 }break;
        case 2:{//programs for string
                  fflush(stdin);
                    printf("Enter the String\n");
                    char ch[100];

                    fgets(ch,100,stdin);
                printf("Press 1 For Counting Vowel\nPress 2 For Counting Consonants\nPress 3 For Reverse the string\nPress 4 For Pallindrome of String\n");
                printf("Press 5 For Word by Word Reverse\nPress 6 For Initals\nPress 7 For removing Spaces\nPress 8 for Counting Spaces\nPress 9 For Searching Substring\n");
                printf("Press 10 For Switching Uppercase to lower and vice versa\nPress 11 For Increasing the character by 1\nPress 12 For counting words in a string\n");
                printf("Press 13 For removing multiple spaces in a string\nPress 14 For Finding the String length\nPress 15 For Copying the String to another array\n");
                printf("Press 16 For Concatinating two string\nPress 17 For counting the upper case characters\nPress 18 For counting the lower case characters\n");
                printf("Press 19 For counting the special characters\nPress 20 FOr printing the ascii\nPress 21 For find and replace a first occurence of single character\nPress 0 to Quit\n");
                    scanf("%d",&c);
                    printf("----------------------------------------------------------------------\n");
                    switch(c)
                    {   
                        case 0:goto loop1;break;
                        case 1:check_vowel(ch);break;
                        case 2:check_consonant(ch);break;
                        case 3:reverse(ch);break;
                        case 4:pallindrome(ch);break;
                        case 5:revword(ch);break;
                        case 6:initials(ch);break;
                        case 7:remspace(ch);break;
                        case 8:countspace(ch);break;
                        case 9:searchstr(ch);break;
                        case 10:switchupperlower(ch);break;
                        case 11:inc_char(ch);break;
                        case 12:word_count(ch);break;
                        case 13:rmul_Space(ch);break;
                        case 14:String_len(ch);break;
                        case 15:copy_str(ch);break;
                        case 16:concat_String(ch);break;
                        case 17:count_upper(ch);break;
                        case 18:count_lower(ch);break;
                        case 19:count_special_char(ch);break;
                        case 20:print_ascii(ch);break;
                        case 21:find_replace(ch);break;
                        
                    }
                }break;
        case 3:{//program of sorting using dynamic memory allocation
                    int n,i;
                    printf("Enter the size for memory allocation\n");
                    scanf("%d",&n);
                    int *p;
                    p=(int *)malloc(n*sizeof(int));
                    printf("Enter the list for sorting\n");
                    for(i=0;i<n;i++)
                    {
                        scanf("%d",&*(p+i));
                    }
                    printf("Select Sorting\n");printf("Enter 1 for Insertion sort\nEnter 2 for Selection sort\nEnter 3 for Bubble sort\nPress 0 to Quit\n");
                    scanf("%d",&c);
            printf("----------------------------------------------------------------------\n");
                    switch(c)
                    {   
                        case 0:goto loop1;break;
                        case 1:insertion_sort(p,n);break;
                        case 2:selection_sort(p,n);break;
                        case 3:bubble_sort(p,n);break;
                    }
                    for(i=0;i<n;i++)
                    {
                        printf("%d ",*(p+i));
                    }
                }break;
        case 4:{//programs for array        
                printf("Press 1 For Sum of Array Element\nPress 2 For Smallest in array\nPress 3 For Largest in array\nPress 4 Trace of Matrix\nPress 5 For Matrix Multiplication\n");
                printf("Press 6 For Average Of the Array\nPress 7 For Array Reverse\nPress 8 For Second largest in array\nPress 9 For Second minimum in array\nPress 10 For Linear Search\n");
                printf("Press 11 For Binary Search\nPress 12 FOr removing the repeating digits\nPress 13 For Difference of the primary and secondary trace of the matrix\nPress 14 for addition of two matrix\n");
                printf("Press 0 to Quit\n");
                    scanf("%d",&c);
                    printf("----------------------------------------------------------------------\n");
                    switch(c)
                    {
                        case 0:goto loop1;break;
                        case 1:sum_of_array_element();break;
                        case 2:smallest_in_array();break;
                        case 3:largest_in_array();break;
                        case 4:trace_of_matrix();break;
                        case 5:matrix_multiplication();break;
                        case 6:average_of_array();break;
                        case 7:array_reverse();break;
                        case 8:second_Largest_in_array();break;
                        case 9:second_Minimum_in_array();break;
                        case 10:linear_search();break;
                        case 11:binary_search();break;
                        case 12:remove_repeating_digits();break;
                        case 13:di_prim_sec_trace();break;
                        case 14:mat_addition();break;
                        case 15:sum_digits_array();break;
                    }
                }break;
        case 5:{//programs of series
                printf("Press 1 For Odd NUmber Series\nPress 2 For Even Number Series\nPress 3 For Fibonacci Series\nPress 4 FOr Exponential Series\nPress 5 for printing square series\n");
                printf("Press 6 For printing cube series\nPress 7 for printing sum of increasing integers series\nPress 0 to Quit\n");
                    scanf("%d",&c);
                    printf("----------------------------------------------------------------------\n");
                    switch(c)
                    {
                        case 0:goto loop1;break;
                        case 1:Odd_series();break;
                        case 2:Even_Series();break;
                        case 3:fibonacci();break;
                        case 4:exponential_series();break;
                        case 5:square_series();break;
                        case 6:cube_series();break;
                        case 7:in_integer_series();break;
                    }
                }break;
        case 6:{//patterns
                printf("Press 1 For printing Pascal's triangle\nPress 2 For printing Floyd's Triangle\nPress 3 For printing Right Shifted Triangle\nPress 4 For printing inverted star pattern\nPress 0 to Quit\n");   
                    scanf("%d",&c);
                    printf("----------------------------------------------------------------------\n");
                    switch(c)
                    {
                        case 0:goto loop1;
                        case 1:pascals_triangle();break;
                        case 2:floyds_triangle();break;
                        case 3:rst();break;
                        case 4:isp();break;
                    }
        }
    }
}
void swap_value()
{
    printf("Enter the value of a and b: \n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d and b=%d\n",a,b);
    int temp=a;
    a=b;
    b=a;
    printf("After swap a=%d and b=%d",a,b);
}
void swap_reference(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void largest_in_three_number()
{
    int n,large,num1,num2,num3;
    printf("Enter the value of num1, num2, num3:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    large=num1;
    large=large>num2?large:num2;
    large=large>num3?large:num3;
    printf("largest among three is : %d",large);
}
void smallest_in_three_number()
{
    int n,small,num1,num2,num3;
    printf("Enter the value of num1, num2, num3:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    small=num1;
    small=small<num2?small:num2;
    small=small<num3?small:num3;
    printf("smallest among three is : %d",small);
}
void sum_of_natural_numbers()
{
    printf("Enter the value upto which sum is to be printed\n");
    int n,i,sum=0;
    scanf("%d",&n);
    printf("Sum of the series upto %d is\n",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
void armstrong()
{
    printf("Enter the Number\n");
    int n,r=0,d,b;
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        d=n%10;
        r=r+d*d*d;
        n=n/10;
    }
    if(r==b)
    printf("The given Number is Armstrong Number");
    else
    {
        printf("The given Number is not a Armstrong Number");
    }
    
}
void factorial()
{
    printf("Enter the Number\n");
    int n,p=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        p=p*i;
    }printf("factorial of %d is: %d",n,p);
}
void digit_pallindrome()
{
    printf("Enter the Number\n");
    int n,i,d,r=0;
    scanf("%d",&n);
    int b=n;
     while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(b==r)
    {printf("The Given Number is pallindrome");}
    else
    {
        printf("The Given Number is not pallindrome");
    }
}
void digit_reverse(){
    printf("Enter the Number\n");
    int n,d,r;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Rverse of the given number is: %d",r);
}
void prime()
{
    printf("Enter the Number\n");
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
       { flag=1;break;}
    }
    if(flag==0&&n!=1)
    {printf("NUmber is Prime");}
    else{printf("Number is not prime");}
}
void fibonacci()
{
    printf("Enter the Number upto which series is to be printed\n");
    int n,i,p=0,k=1,next;
    printf("Series upto %d is:\n",n);
    scanf("%d",&n);
      for (i = 1; i <= n; i++) {
        printf("%d, ", p);
        next = p + k;
        p = k;
        k = next;
    }
}
void digitsum()
{
    printf("Enter the Number\n");
    int n,i,p;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        p=p+i;
        n=n/10;
    }
    printf("Sum of the digits of %n is: %d",n,p);
}
void check_vowel(char *p)
{   
    int flag=0;
    for(int i=0;p[i]!='\0';i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
        {
            flag++;
        }
    }
    printf("The total numbe of vowels present in the string is: %d",flag);
}
void  check_consonant(char *p)
{
    int flag=0;
    for(int i=0;p[i]!='\0';i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
        {
            continue;
        }
        else
        {
            flag++;
        }
        
    }
    printf("The total numbe of consonents present in the string is: %d",flag);
}
void reverse(char *p){
    int l=strlen(p);
    int i;
    for(i=0;i<l/2;i++)
    {
        char temp;
        temp=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-i-1)=temp;
    }
    printf("%s",p);
}
void pallindrome(char *p)
{
    int l,i,k,flag=0;
    l=strlen(p);
    for(i=0,k=l;i<(l/2);i++,k--)
    {   
        if(*(p+i)==*(p+k-2))
           { continue;}
         else
            {
                flag=1;
                break;
            }    
    }
    if(flag==0)
    printf("Pallindrome");
    else
    {
        printf("not pallindrome");
    }
}
void remspace(char *p){
    int l=strlen(p);
    int i,j;
    for(i=0;i<l-1;i++)
    {
        if(*(p+i)==' ')
        {
            for(j=i;j<l-1;j++)
            {
                *(p+j)=*(p+j+1);
            }
        }
    }
    printf("%s",p);
}
void countspace(char *p)
{
    int l=strlen(p);
    int i,count=0;
    for(i=0;i<l-1;i++)
    {
        if(*(p+i)==' ')
         count++;
    }
    printf("%d",count);
}
void switchupperlower(char *p)
{
    int i;
    int l=strlen(p);
    for(i=0;i<l-1;i++)
    {
        if(*(p+i)==' ')
        { continue;}
        if(*(p+i)>=65&&*(p+i)<=90)
        *(p+i)=*(p+i)+32;
        else
        {
            *(p+i)=*(p+i)-32;
        }
    }
    printf("%s",p);
}
void searchstr(char *p)
{
    int i,j,flag=0,l=strlen(p);
    printf("Enter the string to be searched\n");
    char k[100];
    fgets(k,100,stdin);
    int b=strlen(k);
    for(i=0,j=0;i<l-1&&j<=b-2;i++,j++)
    {
        if(*(p+i)==k[j])
        {printf("value of *(P+%d)=%c and the value of k[%d]=%c\n",i,*(p+i),j,k[i]);
            continue;}
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("find");
    }
    else
    {
        printf("not find");
    }
}
void word_count(char *p)
{   
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)==' ')
        count++;
    }
    printf("Total number of words in a string is: %d words",count+1);
}
void rmul_Space(char *p)
{   
    int l=strlen(p);
    for(int i=0;i<l-1;i++)
    {
        if(*(p+i)==' '&&(*(p+i+1)==' '||*(p+i-1)==' '))
        {
            for(int j=i;j<l-1;j++)
            {
                *(p+j)=*(p+j+1);
            }
        }
    }
    printf("After Removing the multiple spaces\n%s",p);
}
void revword(char *p)
{
    int space,i,j,k,t;
    for(i=0;*(p+i)!='\0';i++);
    for(i=i-1;*(p+i)!=' ';i--);
    for(k=0;*(p+k)!=' ';k++);
    for(t=k-1;t>=0;t--)
    {
        printf("%c",*(p+t));
    }
    for(t=k+1;t<=i;t++)
    {
        if(*(p+t)==' ')
        {
            for(j=t;j>k;j--)
            {
                printf("%c",*(p+j));
            }
            k=t;
        }
    }
    for(int s=i-1;s>=i;s--)
    {
        printf("%c",*(p+s));
    }
}
void initials(char *p)
{
    int i,j,k;
    for(i=strlen(p)-1;i>0;i--)
    {
        if(*(p+i)==' ')
        {
            i++;
            break;
        }
    }
    int start=0;
    for(j=0;j<i;j++)
    {
        if(*(p+j)==' '){
            printf("%c.", *(p+start));
            start = j+1;
        }
    }
    for(k=i;k<strlen(p);k++)
    {
        printf("%c",*(p+k));
    }
}
void inc_char(char *p)
{
    for(int i=0;*(p+i)!='\0';i++)
    {
        if((*(p+i)>=60&&*(p+i)<=90)||(*(p+i)>=97&&*(p+i)<=122))
        {
            if(*(p+i)==90)
            {
                *(p+i)=*(p+i)-25;
            }
            if(*(p+i)==122)
            {
                *(p+i)=*(p+i)-25;
            }*(p+i)=*(p+i)+1;
        }
    }
    printf("%s",p);
}
void String_len(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    printf("Length of the given string is: %d",i);
}
void copy_str(char *p)
{
    int l=strlen(p);
    int i,arr[l];
    for(i=0;i<l-1;i++)
    {
        arr[i]=*(p+i);
    }
    printf("The Copied String is:\n%s",arr);
}
void print_ascii(char *p)
{   
    for(int i=0;i<strlen(p);i++)
    {printf("%d ",*(p+i));}
}
void concat_String(char *p)
{   
    fflush(stdin);
    int j,i,k,l=strlen(p);
    printf("Take anothe String for concatinate\n");
    char ar[100],arr[1000];
    fgets(ar,100,stdin);
    for(j=0;j<l-2;j++)
    {
        arr[j]=*(p+j);
    }
    for(i=j,k=0;i<300;i++,k++)
    {
        arr[i]=ar[k];
    }arr[i]='\0';
        printf("The Concatinated array is:\n%s",arr);
}
void count_upper(char *p)
{   
    int i,count=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>=65&&*(p+i)<=90)
            count++;
    }
    printf("The Total Upper case characters in the given string are: %d",count);
}
void find_replace(char *p)
{
    fflush(stdin);
    printf("Enter the character to find: ");
    char c,d;
    scanf("%c",&c);
    fflush(stdin);
    printf("Enter the character to replace: ");
    scanf("%c",&d);
    
    for(int i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)=c)
       {
            *(p+i)=d;
            break;
       } 
    }
    printf("%c %c\n",c,d);
    printf("The new string is:\n");
    printf("%s",p);
}
void count_lower(char *p)
{
    int i,count=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>=97&&*(p+i)<=122)
            count++;
    }
    printf("The Total Lower case characters in the given string are: %d",count);
}
void count_special_char(char *p)
{
    int i,count=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if((*(p+i)>=65&&*(p+i)<=90)&&(*(p+i)>=97&&*(p+i)<=122))
            continue;
            else
                count++;
    }
    printf("The Total Special characters in the given string are: %d",count);
}
void bubble_sort(int *p,int n)
{
    int i, j; 
   for (i = 0; i < n-1; i++){           
       for (j = 0; j < n-i-1; j++){  
           if (*(p+j) > *(p+j+1)) 
              {
               swap_reference((p+j),(p+j+1)); 
              }
        }
    }
}
void selection_sort(int *p,int n)
{
     int i,j;
      for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(*(p+i)>*(p+j)){
            swap_reference((p+i),(p+j));
         }
      }
   }
}
void insertion_sort(int *p,int n)
{
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = *(p+i); 
        j = i - 1; 
        while (j >= 0 && *(p+j) > key) { 
            *(p+j + 1) = *(p+j); 
            j = j - 1; 
        } 
        *(p+j+1)= key; 
    } 
}
void sum_of_array_element()
{
    printf("Enter the size of array");
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;
    i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
void largest_in_array()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    printf("Enter the array elements\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(int i=0;i<n;i++)
    {
        large=large>arr[i]?large:arr[i];
    }
    printf("largest emlent in the array is: %d",large);
}
void smallest_in_array()
{
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    printf("Enter the array elements\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    for(int i=0;i<n;i++)
    {
        small=small<arr[i]?small:arr[i];
    }
    printf("smallest emlent in the array is: %d",small);
}
void trace_of_matrix()
{
    printf("Enter the size of the matrix\n");
    int n,m;
    scanf("%d %d",&m,&n);
    printf("Enter the matrix elements\n");
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("---------------OUTPUT---------------");
    int trace=0;
    if(m==n)
    {
        for(int i=0;i<m;i++)
        {
           trace=trace+arr[i][i];
        }
        printf("trace of the given matrix is: %d",trace);
    }
    else
    {
        printf("trace can be applied only for matrix having equal row and column");
    }
    
}
void matrix_multiplication()
{
    printf("Enter the row and column for the first matrix\n");
    int m1,n1,sum=0;
    scanf("%d %d",&m1,&n1);
    printf("Enter the first matrix elements\n");
    int arr[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the rows and columns for the second matrix;\n");
    int m2,n2,i,j,k;
    scanf("%d %d",&m2,&n2);
    printf("Enter the second matrix element\n");fflush(stdin);
    int arr2[m2][n2];
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("---------------OUTPUT---------------");
    int mul[10][10];
    if(n1!=m2)
    {
        printf("Multiplication not possible\n");
    }
    else
    {
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            for( k=0;k<m2;k++)
            { 
               sum=sum+arr[i][k]+arr2[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }

    }
    }
    printf("Multiplication of the two matrix is:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}
void convert_Degree_to_Fahrenheit()
{
    printf("Enter the temperature in degrres\n");
    float c,f;
    scanf("%f",c);
    f=c*(9/5)+32;
    printf("Temperature in Fahrenheit is : %0.2f",f);
}
void convert_Fahrenheit_to_degree()
{
    printf("Enter the temperature in FAhrenheit\n");
    float f,c;
    scanf("%f",f);
    c=(f-32)*(5/9);
    printf("Temperatur ein celsius is : %0.2f",c);
}
void calculator()
{
    int a,b;
    printf("ENter the values of a and b\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operator\n");
    char d;
    scanf("%c",&d);
    switch(d)
    {
        case '+':printf("Sum of a and b is: %d",a+b);break;
        case '-':printf("Difference of a and b is: %d",a-b);break;
        case '*':printf("Multiplication of a and b is: %d",a*b);break;
        case '/':printf("Division of and b is: %0.2f ",a/b);break;
        case '%':printf("Modulus of a and b is: %d ",a%b);break;
    }
}
void average_of_array()
{
    printf("Enter the size of array\n");
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Average of the array elements is : %d\n",sum/n);
}
void array_reverse()
{
    printf("Eneter the size of the array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the  Array elemnts\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reversed array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
float fact(int n)
{   float p=1;int i;
     for(i=1;i<=n;i++){
        p=p*i;
        }
        return p;
}
void exponential_series()
{   
    printf("Print upto which number we want to find the exponential of:\n");
    int n,i;
    float sum=1;
    scanf("%d",&n);
    for( i=2;i<n;i++)
    {   
        float t=i/fact(i);
        sum=sum+t;
    }
    printf("e=%f",sum);
}
void second_Largest_in_array()
{   
    printf("Enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array ELement\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(int i=1;i<n;i++)
    {
        large=large>arr[i]?large:arr[i];
    }
    printf("larges %d\n",large);
    int slarge=arr[0];
    for(int i=1;i<n;i++)
    {
      if(slarge<arr[i]&&arr[i]<large)
      {
         slarge=arr[i];
      }
    }
    printf("Second Largest number in arrray is :%d ",slarge);
}
void second_Minimum_in_array()
{   
    printf("Enter the size of the array\n");
   int n;
   scanf("%d",&n);
   int arr[n];
   printf("Enter the array Elements\n");
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
    selection_sort(arr,n);
   printf("Second Smallest in the array is :%d",arr[1]);
}
void Odd()
{   
    int n;
    printf("Ënter the number\n");
    scanf("%d",&n);
    if(n%2!=0)
    printf("It is odd number");
    else
    printf("It is not a odd number");
}
void Even()
{
    int n;
    printf("ENter the Number\n");
    scanf("%d",&n);
    if(n%2==0)
    printf("It is even Number");
    else
    printf("It is Even number");
}
void sum_of_odd()
{
    int n,sum=0;
    printf("Enter the number upto which sum is required\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("The Sum of odd number upto n= %d is: %d",n,sum);
}
void sum_of_even()
{
    int n,sum=0;
    printf("Enter the number upto which sum is required\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i+=2)
    {   
        sum=sum+i;
    }
    printf("The Sum of even number upto n= %d is: %d",n,sum);
}
void Even_Series()
{   fflush(stdin);
    printf("Enter the Number upto which series is printed:\n");
    int n;
    scanf("%d",&n);
    printf("Series of Even Number\n");
    for(int i=0;i<=n-2;i+=2)
    {
        printf("%d, ",i);
    }
    printf("%d",n);
}
void Odd_series()
{
    printf("Enter the number upto which series is printed: \n");
    int n;
    scanf("%d",&n);
    printf("Series of odd Number\n");
    for(int i=1;i<=n-2;i+=2)
    {
        printf("%d, ",i);
    }
    printf("%d",n);
}
void leap_year()
{
    int n, flag = 0;
    printf("Enter a year:: ");
    scanf("%u",&n);
    flag = (n%100==0)?((n%400==0)?1:0):(n%4==0?1:0);
    if(flag){
    printf("Leap Year.");
    }
    else{
    printf("Not a Leap year.");
    }
}
void mul_table()
{
    printf("Enter the number whose multiplication table is needed\n");
    int n;
    scanf("%d",&n);
    printf("Multiplication table of %d:\n",n);
    for(int i=1;i<10;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
}
void sum_prime()
{
    printf("Enter the Number upto which sum is required\n");
    int n,i,j=2,flag,sum=0,num;
    scanf("%d",&n);
    for(j=2;j<=n;j++)
    {   flag=0;
        for(i=2;i<=j/2;i++)
        {
         if(j%i==0)
         { flag=1;break;}
        }
        if(flag==0)
        {
            sum=sum+j;
        } 
    }
    printf("Sum of the prime number upto %d is: %d",n,sum);
}
void sum_prime_range()
{
    printf("Enter the range of number for which sum is required\n");
    int n,m,i,j=2,flag,sum=0,num;
    scanf("%d %d",&m,&n);
    for(j=m;j<=n;j++)
    {   flag=0;
        for(i=2;i<=j/2;i++)
        {
         if(j%i==0)
         { flag=1;break;}
        }
        if(flag==0)
        {
            sum=sum+j;
        } 
    }
    printf("sum of the prime numbers in the range of %d - %d is: %d",m,n,sum);
}
void simple_interest()
{
    int prin,rate,time;
    printf("Enter the Principle: ");
    scanf("%d %d %d",&prin);
    printf("\nEnter the rate of interest: ");
    scanf("%d",&rate);
    printf("\nEnter the time period(years): ");
    scanf("%d",&time);
    int si=(prin*rate*time)/100;
    printf("Simple interest is: %d",si);
}
void digit_word()
{
    printf("Enter the digit: ");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("One");break;
        case 2:printf("Two");break;
        case 3:printf("Three");break;
        case 4:printf("Four");break;
        case 5:printf("Five");break;
        case 6:printf("Six");break;
        case 7:printf("Seven");break;
        case 8:printf("Eight");break;
        case 9:printf("Nine");break;
        default:printf("Invalid Input");break;
    }
}
void linear_search()
{
    int a,i,n,flag=0,k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int p[n];
    printf("Enter the Array Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&*(p+i));
    }
    printf("Enter the Number to be searched: ");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(*(p+i)==a)
        {
           printf("%d is present at location: %d",a,i+1);
            break;
        }
       if(i==(n-1))
       {printf("no is not present");}
    }    
}
void binary_search()
{
    int first=0,n,middle,search,i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int p[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    selection_sort(p,n);

    printf("ENter the number to be searched: ");
    scanf("%d",&search);
    int  last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(p[middle]==search)
        {
           printf("Number is found");
           break;
        }
        else {
            if(search>p[middle])
            {
                first=middle+1;
            }
            else
            {
                last=middle-1;
            }
        }
        if(first>last)
        {
            printf("NUmber is not foound");
        }
    }    
   
}
void square_series()
{
    printf("Enter upto which number series is to be printed: ");
    int n,sum=0,i;
    scanf("%d",&n);
    printf("Series\n");
    for(i=1;i<n;i++)
    {   sum=sum+i*i;
        printf("%d+",i*i);
    }printf("%d\n",n*n);
    printf("Sum of the Series is: %d",sum+n*n);
}
void cube_series()
{
    printf("Enter upto which number series is to be printed: ");
    int n,sum=0,i;
    scanf("%d",&n);
    printf("Series\n");
    for(i=1;i<n;i++)
    {
        printf("%d+",i*i*i);
        sum=sum+i*i*i;
    }printf("%d\n",i*i*i);
    printf("Sum of the Series is : %d",sum+i*i*i);
}
void in_integer_series()
{
    printf("Enter upto which number series is printed:");
    int n,i,j,sum=0,tsum=0;
    scanf("%d",&n);
    printf("Series\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   
            sum=sum+j;
        }
    }
    printf("Sum of the series is: %d",sum);
}
void power()
{
    printf("Enter number: ");
    int n,p,result=1;
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
      result=result*n;
    }
    printf("%d",result);
}
void permutation()
{
    printf("ENter the Value of n and r: ");
    int n,r;
    scanf("%d %d",&n,&r);
    float result=(float)(fact(n)/fact(n-r));
    printf("Permutation : %0.2f",result);
}
void combination()
{
    printf("Enter the Value of n and r: ");
    int n,r;
    scanf("%d %d",&n,&r);
    float result=(float)(fact(n)/(fact(n)*fact(n-r)));
    printf("Permutation : %0.2f",result);
}
void deci_binary()
{
    printf("Enter the Number in Decimal: ");
    int n,i=0, a[10];
    scanf("%d",&n);
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("The given number in binary is:\n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
void deci_octal()
{
    printf("Enter the Number in Decimal: ");
    int n,i=0, a[10];
    scanf("%d",&n);
    while(n>0)
    {
        a[i]=n%8;
        n=n/8;
        i++;
    }
    printf("The given number in Ocatal is:\n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
void binary_deci()
{
    printf("Enter the Number in Binary");
    int n;
    scanf("%d",&n);
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }printf("The given number in decimal is: %d",dec);
}
void octal_deci()
{
    printf("Enter the number in octal:\n");
    int n;
    scanf("%d",&n);
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(8, i);
        ++i;
    }
    printf("The given number in decimal is: %d",dec);
}
void remove_repeating_digits()
{
    printf("Enter the size of the array:");
    int n,i,j,k,t;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elments:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //code for removing the digits
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(t=j;t<n;t++)
                {
                    arr[t]=arr[t+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("The modified array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}
void di_prim_sec_trace()
{
    printf("Enter the row and column of the matrix:");
    int m,n,i,j,psum=0,ssum=0;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    printf("Enter the Matrix Elements\n");
    if(m!=n)
    {
        printf("Traces cannot be found");
    }
    else
    { 
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("\n");
        for(i=0;i<m;i++)
        {
            printf("%d ",arr[i][i]);
            psum=psum+arr[i][i];
        }
        printf("---------------OUTPUT---------------");
        printf("\n");
        printf("Sum of primary trace matrix is: %d\n",psum);
        for(i=0;i<m;i++)
        {
            for(j=n-i-1;j>=0;j--)
           {
                printf("%d ",arr[i][j]);
                ssum=ssum+arr[i][j];
                break;
           }
        }
        printf("\n");
        printf("Sum of the secondary trace of the matrix is: %d",ssum);
        printf("\nDifference of the primary and the secondary trace of the matrix is: %d",psum-ssum);
    }
}
void strong_number()
{
    //sum of the factorials of the digits of the number is equal to number itself
    //145
    printf("Enter the Number: ");
    int n,r=0,d;
    scanf("%d",&n);
    int b=n;
    while(n>0)
    {
        d=n%10;
        r=r+fact(d);
        n=n/10;
    }
    if(b==r)
    {
        printf("Yes it is a strong number");
    }
    else
    {
        printf("No It is not a strong number");
    }
    
}
void perfect_number()
{   //6
    //sum of the factors of the number is equal to the number itself
    printf("Enter the number: ");
    int n,r=0;
    scanf("%d",&n);
    int b=n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            r=r+i;
    }
    if(b=r)
    {
        printf("Yes it is a perfect number");
    }
    else
    {
        printf("No it is not a perfect number");
    }
    
    
}
void friendly_pair()
{   //sum of the factoriala of the two number divided by the number itsefl has the same value
    //6,28
    printf("Enter the first number: ");
    int num1,num2,sum1=0,sum2=0;
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    int a=num1,b=num2;
    for(int i=1;i<=num1;i++)
    {
        if(num1%i==0)
        sum1+=i;
    }
    for(int i=1;i<num2;i++)
    {
        if(num2%i==0)
        sum2+=i;
    }
    if((sum1/a)==(sum2/b))
    {
        printf("%d and %d are friendly paired",num1,num2);
    }
    else
    {
        printf("%d and %d are not friendly paired",num1,num2);
    }
    
}
void automorphic_number()
{   //the last digit of the square of the number is same as the number
    //5
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    int sq=n*n;

    if(n%10==sq%10)
    {
        printf("%d is an automorphic number",n);
    }
    else
    {
        printf("%d is not an automorphic number",n);
    }
    
}
void harshad_number()
{   //number divided by the sum of its factors is same as the number
    //21
    printf("Enter the number: ");
    int n,d,r=0;
    scanf("%d",&n);
    int b=n;
    while(n>0)
    {
        d=n%10;
        r=r+d;
        n=n/10;
    }
    if(b%r==0)
    {
        printf("%d is a harshad number",b);
    }
    else
    {
        printf("%d is not a harshad number",b);
    }
    
}
void factors()
{
    printf("Enter the number: ");
    int n,i;
    scanf("%d",&n);
    printf("The Factors of %d are: \n",n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
       { printf("%d ",i);}
    }
}
void quad_equation()
{
    printf("Enter the value of a: ");
    int a,b,c;
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of a: ");
    scanf("%d",&c);
    double di=sqrt((b*b)-(4*a*c));
    double x1=((-b)+di)/2*a;
    double x2=((-b)-di)/2*a;
    printf("roots of the equations are %lf and %lf",x1,x2);
}
void sum_digits_array()
{
    printf("Enter the size of the array: ");
    int n,d,r=0;
    scanf("%d",&n);
    printf("Enter the array ELements: \n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //code for element's digit's sum
    for(int i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            d=arr[i]%10;
            r=r+d;
            arr[i]/=10;
        }
        arr[i]=r;
    }
    printf("Array Representing the sum of digits of the elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void mat_addition()
{
    int m1,n1,m2,n2;
    printf("Enter the rows and column of the first matrix");
    scanf("%d %d",&m1,&n1);
    int mat1[m1][n1];
    printf("Enter the matrix elements\n");
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        scanf("%d",&mat1[i][j]);
    }
    printf("Enter the rows and column of the second matrix");
    scanf("%d %d",&m2,&n2);
    if(m1!=m2&&n1==n2)
    {
        printf("Sum not possible");
    }
    else
    {
        int mat2[m2][n2];
        printf("Enter the matrix elements:\n");
        for(int i=0;i<m2;i++)
        {
            for(int j=0;j<n2;j++)
            scanf("%d",&mat2[i][j]);
        }
        //for matrix addition
        m1=m1>m2?m1:m2;
        n1=n1>n2?n1:n2;
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            mat1[i][j]=mat1[i][j]+mat2[i][j];
        }
        printf("The addition of the two matrix is:\n");
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            printf("%d ",mat1[i][j]);
            printf("\n");
        }
    }
}
void pascals_triangle()
{
    int n,i,j,space;
    printf("Enter the number upto which pattern is to be printed");
    scanf("%d",&n);
    printf("\n\t\t\tPattern\t\t\t\n");
    for(i=1;i<=n;i++)
    {
        for(space=n-1;space>=i;space--){printf("  ");}
        for(j=1;j<=i;j++){printf("%d ",j);}
        for(j=i-1;j>=1;j--){printf("%d ",j);}
        printf("\n");
    }
}
void area_of_circle()
{
    printf("Enter the radius of the circle: ");
    int r;
    scanf("%d",&r);
    double area=(double)3.14*r*r;
    printf("The area of the circle is %0.2lf",area);
}
void floyds_triangle()
{
    printf("Enter the number upto which  pattern is to be printed: ");
    int n,number=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
}
void rst()
{
    printf("Enter the number: ");
    int n,space=n,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(space=n-1;space>=i;space--)printf("  ");
        for(j=1;j<=i;j++)
        printf("%d ",i);
        printf("\n");
    }
}
void isp()
{
    printf("Enter the number of rows: ");
    int n,i,j,space;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(space=0;space<n-i;space++)printf("  ");
        for(j=i;j<=2*i-1;j++)printf("* ");
        for(j=0;j<i-1;j++)printf("* ");
        printf("\n");
    }
}
void check()
{
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    if(n<0)
    printf("It is a negative number.");
    else 
    printf("It is a positive number.");
}
void quadrant()
{
    printf("Enter the x and y coordinates: ");
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
    printf("It is in Ist Quadrant.");
    else
    {   if(x<0&&y>0)
        printf("It is in IInd Quadrant.");
        else
        {   if(x<0&&y<0)
            printf("It is in IIIrd Quadrant.");
            else
            {   if(x>0&&y<0)
                printf("It is in IVth Quadrant.");
                else
                {   if(x==0&&y==0)
                    printf("It is at Origin.");
                }}}}
}
void co_digits()
{
    printf("Enter the digits whise frequency id to be counted: ");
    int n,start,end,count=0;
    scanf("%d",&n);
    printf("Enter the range in which the frequency is to be found: ");
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++)
    {   int b=i;
        while(b>0)
        {
            if(b%10==n)
                count++;
                b/=10;
        }
        
    }
    printf("The %d is present %d times from %d to %d",n,count,start,end);
}
void pytha()
{
 int k;
    int a,b,c=0,m,n;
    printf("Enter the range till which you want to find pythagorean triplets:: ");
    scanf("%d",&k);
    // formula used
    // a,b,c are triplets if::
    // a=m*m -n*n and b = 2*m*n and c= m*m+n*n
    printf("Pythogren triplets in given range are::\n");
    m = 2;
    while(c<k){
        for(n=1;n<m;n++){
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m+n*n;
            if(c>k) break;
            printf("%d %d %d\n",a,b,c);
        }
        m++;   
}
}
void triangularnumber()
{
    int n,sum=0,i;
    printf("Enter the range till which you want triangular numbers:: ");
    scanf("%d",&n);
    printf("Triangular numbers are:: ");
    for(i=1;i<=n;i++){
        sum += i;
        printf("%d ",sum);
    }
}
void areatriangle()
{
    int a,b,c;
    float area, s;
    printf("Enter the sides of triangle:: ");
    scanf("%d %d %d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area:: %.2f Perimeter:: %.2f",area,2*s);
}
void specialnumber()
{//it is a number for which the product of the gitis of the number and the sum of the digits of the number is equak to the number itself
  
  //29  int n,product =1,sum=0,d,n2;
    printf("Enter a number:: ");
    int n,n2,d,product=1,sum=0;
    scanf("%d",&n);
    n2=n;
    while(n>0){
        d = n%10;
        product *= d;
        sum += d;
        n/=10;
    }
    if(product+sum==n2){
        printf("Special Number");
    }
    else {
        printf("Not a special number.");
    }
}