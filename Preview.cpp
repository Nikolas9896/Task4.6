void Preview(int *array, int n)
{	
	if( array != NULL )
	{
		for( int i = 0; i != n; ++i )
		{
			cout << array[i] <<" "<< flush;
		}		
		cout << endl;
	}

	else if(array == NULL )
 	{
	cout << "Warning!!! The memory was not allocated. Restart application." << endl;  
	}
}

