#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	int	publicfoo;

	Sample(void);
	~Sample(void);

	void publicBar (void)const;

private:

	int	_privatefoo;

	void _privateBar(void)const;

};

#endif
