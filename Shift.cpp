void Shift(int *array, int N, int M )
{
	if( array != NULL )
	{

		int temp = array [ M ];


		for( int m = M; m != ( N-1 ); ++m)
		{	
			array[ m ] = array[ m + 1];
		}
	
		array [N -1] = temp;
	}	
	
	else if(array == NULL )
 	{
	cout << "Warning!!! The memory was not allocated. Restart application." << endl;  
	}
}
