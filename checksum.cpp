#include <iostream>
#include<math.h>
using namespace std;
int main()
{
 int a,b,c,d,sum,csum[4],binary[8],wsum[4],cs=0,fsum,wsum1[4],binary1[8];
 cout << "\nEnter the 4 inputs:\n" << endl;
 cin>>a>>b>>c>>d;
 sum=a+b+c+d;
 for(int i=7;i>=0;i--)
 {
 binary[i]=sum%2;
 sum=sum/2;
 cout<<binary[i];
 }
 wsum[0]=binary[0]+binary[4];
 wsum[1]=binary[1]+binary[5];
 wsum[2]=binary[2]+binary[6];
 wsum[3]=binary[3]+binary[7];
 cout<<"ws"<<endl;
 for(int j=0;j<4;j++)
 {
 if(wsum[j]==0)
 wsum[j]=1;
 else
 wsum[j]=0;
 cout<<wsum[j];
 csum[j]=wsum[j];
 }
 for(int k=3;k>=0;k--)
 {
 cs=cs+csum[k]*pow(2,k);
 }
 cout<<endl<<cs<<endl;
 fsum=a+b+c+d+cs;
 for(int i=7;i>=0;i--)
 {
 binary1[i]=fsum%2;
 fsum=fsum/2;
 cout<<binary1[i];
 }
 wsum1[0]=binary1[0]+binary1[4];
 wsum1[1]=binary1[1]+binary1[5];
 wsum1[2]=binary1[2]+binary1[6];
 wsum1[3]=binary1[3]+binary1[7];
 cout<<"\nreceiver side:"<<endl;
 for(int j=0;j<4;j++)
 {
 if(wsum1[j]==0)
 wsum1[j]=1;
 else
 wsum1[j]=0;
 cout<<wsum1[j];
 }
 if(wsum1[0]==0 && wsum1[2]==0 && wsum1[2]==0 && wsum1[3]==0)
 cout<<"\nAccepted";
 else
 cout<<"\nNot Accepted";
 return 0;
}
