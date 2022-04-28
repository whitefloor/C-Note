#include <stdio.h>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

// c 從 main開始，跟go一樣
// 用xcode寫c auto formatting = ctrl + i
int main(){
    // c data type
    int a  = 123;
    short b = 111;
    long c  = 123123;
    long long d = 123123;
    char e = 1;
    
    unsigned int f = 123;
    unsigned short g = 123;
    unsigned long h = 123;
    unsigned long long i = 123;
    
    float j = 123.123;
    double k = 123.123;
    
    char l = 'A';// 注意：''只能包含單個string
    char m[] = "AAAAAAAAA";// 注意：c宣告字串要用陣列
    char o[]={'a','b','c'};
        
    return 0;
}
