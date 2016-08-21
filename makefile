MAKEFLAGS += -s

CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror -O2

src_dir = src
problems = $(basename $(notdir $(wildcard $(src_dir)/problem_*.c)))

.PHONY: all
all: $(problems)

build_dir = build

.PHONY: $(problems)
$(problems): %: $(src_dir)/%.o | $(build_dir)
	$(CC) $(CFLAGS) $< -o $(build_dir)/$@ && ./$(build_dir)/$@

$(build_dir):
	mkdir -p $@

.PHONY: clean
clean:
	rm -rf $(src_dir)/problem_*.o $(build_dir)
