#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//求一个数的二进制中有多少个1

// int Count_bit(unsigned int a){
//     int count = 0;
//     // while(a){
//     //     if(a%2==1){
//     //         count++;
//     //     }
//     //     a = a / 2;
//     // }
//     // for (int i = 0; i < 32;i++){
//     //     if(((a>>1)&1)==1){
//     //         count++;
//     //     }
//     // }
//     while(a){
//         a = a & (a - 1);
//         count++;
//     }
//     return count;
// }
// int main(){
//     int a = 0;
//     scanf("%d", &a);
//     int count = Count_bit(a);
//     printf("count = %d\n", count);
//     system("pause");
//     return 0;
// }

//求二进制位中不同位的个数

// int Get_bit(int m,int n){
//     int temp = 0,count=0;
//     temp = m ^ n;
//     while(temp){
//         temp = temp & (temp - 1);
//         count++;
//     }
//     return count;
// }
// int main(){
//     int m = 0, n = 0;
//     scanf("%d%d",&m,&n);
//     int count = Get_bit(m, n);
//     printf("count = %d\n", count);
//     system("pause");
//     return 0;
// }

//获取一个整数的二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

// void Print(int m){
//     printf("奇数位\n");
//     for (int i = 30; i >= 0;i-=2){
//         printf("%d ",(m >> i) & 1);
//     }
//     printf("\n偶数位\n");
//     for (int i = 31; i >= 0;i-=2){
//         printf("%d ",(m >> i) & 1);
//     }
//     printf("\n");
// }
// int main(){
//     int m=0;
//     scanf("%d", &m);
//     Print(m);
//     system("pause");
//     return 0;
// }

//不创建临时变量交换两个数

// int main(){
//     int m = 4, n = 8;
//     m = m ^ n;
//     n = m^n;
//     m = m ^ n;
//     printf("m=%d n=%d\n", m, n);
//     system("pause");
//     return 0;
// }


// void Print(int *p,int sz){
//     for (int i = 0; i < sz;i++){
//         printf("%d ", *(p + i));
//     }
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int sz = sizeof(arr) / sizeof(arr[1]);
//     Print(arr, sz);
//     system("pause");
//     return 0;
// }

//字符串逆序（递归实现）

// int My_strlen(char *str){
//     int count = 0;
//     while(*str!='\0'){
//         count++, str++;
//     }
//     return count;
// }
// // void Reverse(char arr[]){
// //     int left = 0, right = My_strlen(arr)-1;
// //     while(left<right){
// //         int temp = arr[left];
// //         arr[left] = arr[right];
// //         arr[right] = temp;
// //         left++, right--;
// //     }
// // }
// void Reverse(char *arr){
//     char temp = arr[0];
//     int len = My_strlen(arr);
//     arr[0] = arr[len - 1];
//     arr[len - 1] = '\0';
//     if(My_strlen(arr + 1)>1){
//         Reverse(arr + 1);
//     }
//     arr[len - 1] = temp;
// }
// int main(){
//     char arr[] = "abcdefghijklmnopqrstuvwxyz";
//     Reverse(arr);
//     printf("%s\n", arr);
//     system("pause");
//     return 0;
// }

//计算一个数的每位之和

// int DigitSum(unsigned int num){
//     if(num>9){
//         return DigitSum(num / 10) + num%10;
//     }else{
//         return num;
//     }
// }
// int main(){
//     unsigned int num = 0;
//     scanf("%d", &num);
//     int ret = DigitSum(num);
//     printf("ret = %d\n", ret);
//     system("pause");
//     return 0;
// }

//递归实现n的k次方

// double Power(int n,int k){
//     if(k>=1){
//         return n * Power(n, k - 1);
//     }else if(k==0){
//         return 1;
//     }else{
//         return (1.0/(Power(n,-k)));
//     }
// }
// int main(){
//     int n = 0,k=0;
//     scanf("%d%d", &n,&k);
//     double num=Power(n,k);
//     printf("%d的%d次方等于%lf\n", n, k, num);
//     system("pause");
//     return 0;
// }

typedef struct Stu{
    char name[50];
    short age;
    char tele[12];
    char sex[5];
} Stu;
int main(){
    Stu s = {"Charlie Puth", 26, "13331331323", "男"};
    printf("%s %d %s %s\n", s.name,s.age,s.tele,s.sex);
    system("pause");
    return 0;
}
