void Program()
{
	int N(0), M(0), L(0), K(0);
	int *array = 0;
	int m;

  
	cout << "Enter number of elements ( N ): " << endl;
	cin >> N;

	cout << "Enter number of steps ( M ) but only N => M: " << endl;
	cin >> M;

	cout << "Enter number of first step ( K ): " << endl;
	cin >> K;
  
	cout << "Enter number of replay steps ( L ): " << endl;
	cin >> L;
  
	array = ( int * )malloc( N * sizeof( int ) );
	m = K;
	if( array == NULL )
	{
		cout << "Warning!!! The memory was not allocated. Restart application." << endl;  
	}
	
	else
	{
		for( int i = 0; i != N; ++i )
		{

			array[ i ] = i+1;
	
		}

	}
}
