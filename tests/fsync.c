#include "tests.h"
#include <sys/syscall.h>

#ifdef __NR_fsync

# include <stdio.h>
# include <unistd.h>

int
main(void)
{
	const long int fd = (long int) 0xdeadbeefffffffff;

	long rc = syscall(__NR_fsync, fd);
	printf("fsync(%d) = %ld %s (%m)\n", (int) fd, rc, errno2name());

	puts("+++ exited with 0 +++");
	return 0;
}

#else

SKIP_MAIN_UNDEFINED("__NR_fsync")

#endif
