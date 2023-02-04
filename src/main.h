#ifndef MAIN_H
#define MAIN_H

#ifndef TEST
#define MAIN    main
#else
#define MAIN    testable_main
#endif

int MAIN(void);

#endif /* MAIN_H */
