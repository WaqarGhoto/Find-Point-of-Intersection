#include<iostream>
using namespace std;
int main()
{
	float a1,b1,c1,a2,b2,c2;
	float x,y;
	cout<<" Input the coefficients both equations one and tow \n\n";
	cout<<"          a1X+b1Y+c1"<<endl;
	
	cout<<" input a1 = ";
	cin>>a1;
	cout<<" input b1 = ";
	cin>>b1; 
	cout<<" input c1 = ";
	cin>>c1;
	cout<<" second equation \n";
	cout<<"          a2X+b2Y+c2"<<endl;
	
	cout<<" input a2 = ";
	cin>>a2; 
	cout<<" input b2 = ";
	cin>>b2;
	cout<<" input c2 = ";
	cin>>c2;
	
	float matrix[2][2]={{a1,b1},{a2,b2}};
	      // for inverse finding
			int determinant;
			determinant =(matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);
			int temp=matrix[0][0];
			matrix[0][0]=matrix[1][1];
			matrix[1][1]=temp;
			matrix[0][1]=matrix[0][1]*(-1);
			matrix[1][0]=matrix[1][0]*(-1);
	
						
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					matrix[i][j]=matrix[i][j]/determinant;
				}
		   }
		   //show invers 
		   
		   for(int i=0;i<2;i++)
		   {
		    	for(int j=0;j<2;j++)
		    	{
		   	    	cout<<matrix[i][j]<<" ";
			    }
			    cout<<endl;
		   }
		   
		   x=(matrix[0][0]*(c1))+(matrix[0][1]*(c2));
		   x=-x;
		   y=(matrix[1][0]*(c1))+(matrix[1][1]*(c2));
		   y=-y;
		   cout<<" the point of intersection of both equation is "<<endl;
		   cout<<"            ( "<<x<<" , "<<y<<" )";
	system("PAUSE");
	return 0;
	
}
