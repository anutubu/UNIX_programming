int main(int argc, char** argv)
{
	
	char* src;
	char* dest;	

	if(argc < 3)
	{
		fprintf(stderr, "%s: missing argument\n", argv[0]);
		fprintf(stderr, "usage: %s [src] [dest]\n", argv[0]);
		return 1;
	}
	else if (argc > 3)
	{
		fprintf(stderr, "%s: too many arguments\n", argv[0]);
		fprintf(stderr, "usage: %s [src] [dest]\n", argv[0]);
		return 1;
	}

	src = argv[1];
	dest = argv[2];

	#ifdef DEBUG
		fprintf(stderr, "[DEBUG]\tsource: [%s] dest: [%s]n",src,dest);	
	#endif	

	

}

	
