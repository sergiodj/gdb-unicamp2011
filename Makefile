PDF = pdflatex
TARGET = gdb-unicamp2011
EXTENSION = tex

.PHONY: clean clean-pdf

all: $(TARGET).${EXTENSION}
	$(PDF) $(TARGET).$(EXTENSION)
	$(PDF) $(TARGET).$(EXTENSION)

clean:
	rm -f $(TARGET).aux $(TARGET).log $(TARGET).nav $(TARGET).out $(TARGET).snm $(TARGET).toc $(TARGET).vrb texput.log

clean-pdf:
	rm -f $(TARGET).pdf

