#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int dragon[3];
	    int sloth[3];
	    for(int j=0;j<3;j++){
	        cin>> dragon[j];
	    }
	    for(int j=0;j<3;j++){
	        cin>> sloth[j];
	    }
	    int sum_d=0,sum_s=0;
	    for(int j=0;j<3;j++){
	        sum_d+=dragon[j];
	        sum_s+=sloth[j];
	    }
	    if(sum_d<sum_s){
	        cout<<"SLOTH"<<endl;
	    }
	    else if(sum_d>sum_s){
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dragon[0]>sloth[0]){
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dragon[0]<sloth[0]){
	        cout<<"SLOTH"<<endl;
	    }
	    else if(dragon[1]>sloth[1]){
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dragon[1]<sloth[1]){
	        cout<<"SLOTH"<<endl;
	    }
	    else if(dragon[2]>sloth[2]){
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dragon[2]<sloth[2]){
	        cout<<"SLOTH"<<endl;
	    }
	    else{
	        cout<<"TIE"<<endl;
	    }
	}
	return 0;
}