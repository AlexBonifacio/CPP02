
EX_DIRS = ex00 ex01 ex02

all: Makefile
	@i=0; \
	while [ $$i -lt $(words $(EX_DIRS)) ]; do \
		dir=`echo $(EX_DIRS) | cut -d ' ' -f $$((i+1))`; \
		echo "Compilating $$dir"; \
		$(MAKE) -C $$dir; \
		i=$$((i+1)); \
	done

fclean:
	@i=0; \
	while [ $$i -lt $(words $(EX_DIRS)) ]; do \
		dir=`echo $(EX_DIRS) | cut -d ' ' -f $$((i+1))`; \
		echo "Cleaning $$dir"; \
		$(MAKE) -C $$dir fclean; \
		i=$$((i+1)); \
	done

.PHONY: all fclean
