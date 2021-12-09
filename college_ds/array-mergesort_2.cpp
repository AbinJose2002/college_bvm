#include<iostream>
using namespace std;
class MergeS
{
public:
int a[20],n,i,l,mid,h,j,k,b[20];
void merge(int,int,int);
void read();
void mergesort(int,int);
void display();
};
void MergeS::read()
{
cout<<"\nEnter the limit\n";
cin>>n;
cout<<"\nEnter the elements\n";
for(i=1;i<=n;i++)
{
cin>>a[i];
}
mergesort(1,n);
}
void MergeS::mergesort(int l,int h)
{
if(l<h)
{
int low=l;
int high=h;
int mid=(low+high)/2;
mergesort(low,mid);
mergesort(mid+1,high);
merge(low,mid,high);
}
}
void MergeS::display()
{
cout<<"\nSorted elemets are\n";
for(i=1;i<=n;i++)
{
cout<<a[i]<<"\n";
}
}
void MergeS::merge(int low,int mid,int high)
{
h=low;
i=low;
j=mid+1;
while((h<=mid)&&(j<=high))
{
if(a[h]<=a[j])
{
b[i]=a[h];
h=h+1;
}
else
{
b[i]=a[j];
j=j+1;
}
i=i+1;
}
if(h>mid)
{
for(k=j;k<=high;k++)
{
b[i]=a[k];
i=i+1;
}
}
else
{
for(k=h;k<=mid;k++)
{
b[i]=a[k];
i=i+1;
}
}
for(k=low;k<=high;k++)
{
a[k]=b[k];
}
}
int main()
{
int low,mid,high,h,l;
MergeS a;
int ch;

do
{
cout<<"MERGESORT OPERATIONS\n";
cout<<"\n1.insert\n2.display\n3.exit\n";
cout<<"\nEnter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
a.read();
break;
case 2:
a.display();
break;
case 3:
break;
default:
cout<<"\nInvalid choice\n";
}
}while(ch!=3);
}