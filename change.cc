#include<iostream>
#include<string>
using namespace std;



int main(){
  int num,total,remain;
  cin >> num;
  int den[num],count[num];
  for(int i=0;i<num;++i){
    cin >> den[i];
  }
  cin >> total;
  for(int i=0;i<num;++i){
    int cur;
    for(int j=i+1;j<num;++j){
      if(den[i]<den[j]){
	cur=den[i];
	den[i]=den[j];
	den[j]=cur;
      }
    }
  }
  remain=total;
  for(int i=0;i<num;++i){
    count[i]=remain/den[i];
    remain=remain-count[i]*den[i];
  }
  if(remain!=0){
    cout << "Impossible" << endl;
  }
  else{
    for (int i=0;i<num;++i){
      if(count[i]!=0){
	cout << count[i] << " x " << den[i] << endl;
      }
    }
  }
  return 0;
}
