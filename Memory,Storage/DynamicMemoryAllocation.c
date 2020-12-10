maaloc, calloc are used for dynamic memory allocation, that is memory is alloted as required and not initially
malloc returns block of certain size as per the requirement no restriciton is there.

ptr = (cast-type*) malloc(sizeinbyte);

thus ptr is a pointer of cast-type, the malloc() returns a pointer to an area of memory wiht the isxe of byte size It the space is insufficient allocation fails
return null pointer if allocation fails

malloc(size in byte) returns address of integer variable
if ptr is char, the cast-type* should be char, int then int

malloc returns void, thus we have to recast it to the data type of the pointer.

int* converts void address to an address to integer, pointer stores the value of address, *pointer gives the value

eg:
int *ptr;
ptr = (int*) malloc(100);
allocates 100 bytes.....if size of int is 2 bytes then 50 integers can be stored...

int *ptr;
ptr = (int*) mallor(100*sizeof(int));

allocates either 200 or 400 bytes according to size of integer, that is 2 or 4 bytes, and pointer
points to the address of the first byte of the memory

int *ptr;
ptr = (int*) malloc(100*sizeof(char));  

allocates either 100 bytes and pointer points to the address of first byte of memory

main thing is computer allocates memory during execution not before it.



row is variable size of each rowis fixed to 5

Allocate n elements dynamically to a pointer variable ,assign data and find sum of all elements using poonter variuable

int main()
{
	int n,i,*ptr,sum = 0;
	printf("Enter number of eleemtns: ");
	scanf("%d",&n);
	
	ptr = (int*) malloc(n*sizeof(int));
	
	print("Enter elemenets of array:");
	
	for(i = 0; i < n; ++i)
	{
	scanf("%d",ptr + i);
	sum += *(ptr + i);
	}
	
	printf("SUM + %d",sum);
	free(ptr);
	return 0;
}

allocate and assign dynamically 2d array [n][5] where coulum is fixed to 5 a pointer and find sum of all elements

int main()
{
	int n,i,sum = 0;
	int (*a)[5]; // pointer pointing to 5 leement row
	printf("ENter number of rows: ");
	scanf("%d",&n);
	
	a = ( int (*)[5] ) malloc(n*5*sixeof(int));
//(int) is an address pointing to 5 itneger elements
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < 5; j++)
			scanf("%d",&a[i][j]
			sum += a[i][j];
			
			
	return 0;
	
}

how do we pass 2dimensional array into a function

	to pass a single variable in call by reference we pass its address.
	to pass one dimensional array in call by reference we declare the formal parameter as address to single element
	normally it is address of first eleemtnt of the array.
	to pass a 2d array in call by reference, we declare the formal parameter as a "pointer to size of a row" int(*pa)[5], so that the 2d array can be accesses using this pointer 
	as we do in case of 2d array. 
	
	write a function to add eleements preesent in every row of a matrix and store it in an array ising pointer
	
	void add_mat_row(int (*pa)[5], int *pb)
	{
		int i, j;
		for(i = 0; i < 4; i++)
		{
			pb[i] = 0;
			for(j = 0; j < 5; j++)
				pb[i] = pb[i] + pa[i][j];
		}
		
		
		
		
excerice 4.13, 4.19,4.20,5.10,5.14,6.4,6.16,6.19,7.20,8.3,8.5,8.8,8.18,9.8,9.11,9.17,10.8,10.16,10.19

