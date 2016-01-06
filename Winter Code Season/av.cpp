#include <iostream>
#include <algorithm>
using namespace std;
int total=0;
void find(int A[], int currSum, int index, int sum,
			int solution[]) 
{
	if (currSum <=sum) {
			//cout<<("\nSum found");
		int count=0;
		for (int i = 0; i < 6; i++) {
				
			if (solution[i] == 1) {
				cout<<(i+1)<<"  ";
				count++;
				}
			}
		if(count==3)
			{cout<<"\n Count is "<<count<<"\n"; total++;}
		}
		else if (index == 6) {
			return;
		} else {
			solution[index] = 1;
			currSum += A[index];
			find(A, currSum, index + 1, sum, solution);
			currSum -= A[index];	
			solution[index] = 0;// do not select the element
			find(A, currSum, index + 1, sum, solution);
		}
		return;
}
int main(int argc, char const *argv[])
{
	int A[]={1,2,3,4,5,6};
	int solution[]={0,0,0,0,0,0};
	find(A,0,0,6,solution);
	cout<<endl<<total;
	return 0;
}
/*public static void find(int[] A, int currSum, int index, int sum,
			int[] solution) {
		if (currSum == sum) {
			System.out.println("\nSum found");
			for (int i = 0; i < solution.length; i++) {
				if (solution[i] == 1) {
					System.out.print("  " + A[i]);
				}
			}

		} else if (index == A.length) {
			return;
		} else {
			solution[index] = 1;// select the element
			currSum += A[index];
			find(A, currSum, index + 1, sum, solution);
			currSum -= A[index];	
			solution[index] = 0;// do not select the element
			find(A, currSum, index + 1, sum, solution);
		}
		return; 
	} */

/*#include <iostream>
using namespace std;
int total=0;
void find(int A[], int currSum, int index, int sum,
			int solution[]) 
{
		if (currSum <= sum) {
			cout<<("\nSum found\n");
			int count=0;
		for (int i = 0; i < 6; i++) {
				
				if (solution[i] == 1) {
					count++;
				}				
			}
			cout<<"Count is ::  "<<count<<" ";
			/*if(count==2)
				{cout<<"   "<<count<<"\n"; total++;}
			*/
		} /*
		else if (index == 6) {
			return;
		} else {
			solution[index] = 1;
			currSum += A[index];
			find(A, currSum, index + 1, sum, solution);
			currSum -= A[index];	
			solution[index] = 0;// do not select the element
			find(A, currSum, index + 1, sum, solution);
		}
		return;
}
int main(int argc, char const *argv[])
{
	int A[]={1,2,3,4,5,6};	
	int solution[]={0,0,0,0,0,0};
	find(A,0,0,6,solution);
	/*
	for(int i=1;i<=6;i++){
		int solution[]={0,0,0,0,0,0};
		find(A,0,0,i,solution);
	}*/
	//find(A,0,0,12,solution);
	/*
	cout<<total<<endl;
	return 0;
}
*/
/*void find(int A[], int currSum, int index, int sum,
			int solution[]) 
{
	if (currSum >= sum) {
			//cout<<("\nSum found");
		int count=0;
		for (int i = 0; i < 4; i++) {
				
			if (solution[i] == 1) {
				cout<<(i+1)<<"  ";
				count++;
				}
			}
		if(count==2)
			{cout<<"\n Count is "<<count<<"\n"; total++;}
		}
		else if (index == 4) {
			return;
		} else {
			solution[index] = 1;
			currSum += A[index];
			find(A, currSum, index + 1, sum, solution);
			currSum -= A[index];	
			solution[index] = 0;// do not select the element
			find(A, currSum, index + 1, sum, solution);
		}
		return;
}*/

//http://algorithms.tutorialhorizon.com/dynamic-programming-subset-sum-problem/