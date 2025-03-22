#include<iostream>

using namespace std;

char a[] = "abcdba";
char *ptr;

int strln(char a[])
{
    int length = 0;
    const char* p = a; //Khởi tạo con trỏ p tới đầu chuỗi

    while(*p != '\0')
    {
        length++;
        p++;
    }
    return length;

}
void reverse_char(char a[]) //Hàm đảo xâu
{
    int n = strln(a);
    for(char *p = &a[n-1]; p >= &a[0]; p--)
        cout<<*p;
    cout<<'\n';
}

void delete_char(char a[], char c) //Hàm xóa ký tự trong xâu
{
    int n = strln(a);
    for(char *p = &a[0]; p <= &a[n-1]; p++)
        if(*p != c) cout<<*p;
}

void pad_right(char a[], int n) // Độn thêm ký tự vào cuối xâu để có độ dài n
{
    int sz = strln(a);
    if(sz >= n)
    {
        for(char *p = &a[0]; p <= &a[sz-1]; p++)
            cout<<*p;
    }
    else
    {
         char *p = a + sz;
         while(sz < n)
         {
             sz++;
             *p = ' ';
             p++;
         }
         *p = '\0';
         for(char *p = &a[0]; p <= &a[n-1]; p++)
            cout<<*p;
     }
}

void pad_left(char a[], int n) //Độn trái
{
    int sz = strln(a);
    if(sz >= n)
    {
        for(char *p = &a[0]; p <= &a[sz-1]; p++)
                cout<<*p;
    }
    else
    {
       int add = n - sz;
       char *p = a + sz - 1;
       while(p >= a)  //Dịch các ký tự sang phải
       {
           *(p + add) = *p;
           p--;
       }
       p = a;
       for(int i = 0; i < add; i++)
            *(p + i) = ' ';
       a[n] = '\0';
       for(p = &a[0]; p <= &a[n-1]; p++)
            cout<<*p;
    }

}

void truncate(char a[], int n) // Cắt đoạn cuối để có độ dài n
{
    int sz = strln(a);
    if(sz <= n)
    {
        for(char *p = &a[0]; p <= &a[n-1]; p++)
            cout<<*p;
    }
    else
    {
        for(char *p = &a[0]; p <= &a[n-1]; p++)
            cout<<*p;
    }

}

bool is_palindrome(char a[]) // kiểm tra xâu đối xứng
{
    int n = strln(a);
    bool check = true;
    for(int i = 0; i < n; i++)
        if(*(ptr + i) != *(ptr + n - i - 1))
        {
            check = false;
            break;
        }
    return check;
}

void trim_left(char a[]) // Xóa các ký tự trắng ở đầu xâu nếu có
{
    int n = strln(a);
    char* t = a;
    while(*t == ' ' && *t != '\0')
    {
        t++;
    }

    while(*t != '\0') // '\0' là ký tự kết thúc chuỗi
    {
        cout<<*t;
        t++;
    }

}

void trim_right(char a[]) // Xóa ký tự trắng ở cuối xâu
{
     int n = strln(a);
     char *t;
     t = &a[n-1];
     while(t >= &a[0] && *t == ' ')
     {
         t--;
     }
     for(char *p = &a[0]; p <= t; p++)
        cout<<*p;
}


int main()
{
    ptr = a;
   // reverse_char(a);
    //trim_right(a);
   // cout<<is_palindrome(a);
   // truncate(a, 3);
    pad_left(a, 7);


}
