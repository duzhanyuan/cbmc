
default: tests.log

test:
	@if ! ../test.pl -c ../program_runner.sh ; then \
		../failed-tests-printer.pl ; \
		exit 1; \
	fi

	@echo "Testing KNOWNBUG fail"

	@if ! ../test.pl -c ../program_runner.sh -K ; then \
		../failed-tests-printer.pl ; \
		exit 1; \
	fi

tests.log:
	pwd
	@if ! ../test.pl -c ../program_runner.sh ; then \
		../failed-tests-printer.pl ; \
		exit 1; \
	fi

	@echo "Testing KNOWNBUG fail"

	@if ! ../test.pl -c ../program_runner.sh -K ; then \
		../failed-tests-printer.pl ; \
		exit 1; \
	fi

show:
	@for dir in *; do \
		if [ -d "$$dir" ]; then \
			vim -o "$$dir/*.c" "$$dir/*.out"; \
		fi; \
	done;

clean:
	@for dir in *; do \
		$(RM) tests.log; \
		if [ -d "$$dir" ]; then \
			cd "$$dir"; \
			$(RM) *.out *.gb; \
			cd ..; \
		fi \
	done
