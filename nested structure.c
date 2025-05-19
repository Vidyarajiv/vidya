#include<stdio.h>
#include<string.h>
struct address{
    char city[30];
    int pincode;
};
struct student{
    int id;
    char name[20];
    float marks;
    struct address ad;
};
int main(){
struct student st;
st.id=20;
strcpy(st.name,"vidya");
st.marks=90.98;
strcpy(st.ad.city,"shimoga");
st.ad.pincode=57301;
printf("id=%d\nname=%s\nmarks=%f\ncity=%s\npincode=%d",st.id,st.name,st.marks,st.ad.city,st.ad.pincode);
}
