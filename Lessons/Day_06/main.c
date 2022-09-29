void dump_64bits_double(double const z);
void dump_32bits_integer(int const n);

int main(void)
{
	int a = 42;

	double b = a;
	double c = (double) a;

	double d = a;
	int e = d;
	int f = (int) d;

	dump_32bits_integer(a);
	dump_64bits_double(b);
	dump_64bits_double(c);
	dump_64bits_double(d);
	dump_32bits_integer(e);
	dump_32bits_integer(f);

	return 0;
}
