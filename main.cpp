#include<iostream>
#include<stdlib.h>
 using namespace std;

 void preview (int* array, int N);
 void shift(int* array, int N, int M);
 

int main()
{ 	
  int N(0), M(0), L(0), K(0);
  int *array = 0;
  int m;

	
  cout << "Enter number of elements ( N ): " << endl;
  cin >> N;
  
  >> M >> K >> L;

  array = ( int * )malloc( N * sizeof( int ) );
  array = 0;
  if( array != NULL )
  {
	m = K;

	for(int i = 0; i != N; ++i)
	{
	
		array[i] = i+1;
	
	}


	preview(array, N);

	

 	
	for(int i = 0 ; i != L; ++i)
 	{
	
		m=(m + M) % N;
		shift(array, N, m);
		preview(array, N);
	
	}
 
 	cout << "Human which was in the end of list: "<< array[N-1] <<endl;
	free(array);

  }
 else if( array == NULL )
 {
 
 	cout << "Warning!!! The memory was not allocated. Restart application." << endl;  
 }

  	 	return 0;
}

void preview(int *array, int n)
{
	for(int i = 0; i != n; ++i)
	{
		cout << array[i] <<" "<< flush;
	}		
	cout << endl;
}


void shift(int *array, int N, int M )
{

	int temp = array [ M ];


	for( int m = M; m != ( N-1 ); ++m)
	{	
		
		array[ m ] = array[ m + 1];
	}
	
	array [N -1] = temp;

	
}
