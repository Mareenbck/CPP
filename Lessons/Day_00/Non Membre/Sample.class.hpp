#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(void);
	~Sample(void);

	static int getnbInst (void);

private:

	static int _nbInst;
};

#endif
