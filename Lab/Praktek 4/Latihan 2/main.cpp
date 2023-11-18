#include <iostream>
using namespace std;
int main(){
	int jarak;
	cout<<"\t Menentukan ongkir"<<endl;
	cout<<"Masukan jarak : ";
	cin>>jarak;
	switch (jarak){
    	case 1 ... 3: 
    	    cout<<"jaraknya adalah "<<jarak<<" ongkir anda 6000"; 
    	    break;
    	case 4 ... 7:
        	cout<<"jaraknya adalah "<<jarak<<" ongkir anda 10000"; 	    	
        	break;
    	case 8 ... 12:
        	cout<<"jaraknya adalah "<<jarak<<" ongkir anda 12000"; 	 	
        	break;
    	default:
    		cout<<"Jarak tidak di ketahui";
	}
	return 0;
}
