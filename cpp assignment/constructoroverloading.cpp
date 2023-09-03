//wap to demonstrate constructor overloading

#include<iostream>
using namespace std;
class Area{
	private:
		int length;
		int breath;
	public:
		Area():length(5),breath(2){
			
		}
		Area(int l, int b):length(l),breath(b){
			
		}
		void GetLength()
		{
			cout<<"Enter the length and the breath respectively";
			cin>>length>>breath;
		}
		int AreaCalculation()
		{
			return length*breath;
		}
		void DisplayArea(int temp){
			cout<<"Area:"<<temp<<endl;
		}
};
int main()
{
	Area A1, A2(2,1);
	int temp;
	cout<<"Default Area when no arguments is passed."<<endl;
	temp=A1.AreaCalculation();
	A1.DisplayArea(temp);
	cout<<"Area when (2,1) is passed as an argument."<<endl;
	temp=A2.AreaCalculation();
	A2.DisplayArea(temp);
	return 0;
}



