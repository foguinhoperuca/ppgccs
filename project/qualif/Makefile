GITHUB_FOLDER=~/universal/Dropbox/projects/ppgccs/github
PROJECT=jefferson_qualif
DELETE_FILES=${shell cat ${GITHUB_FOLDER}/.gitignore}

all: clean compile bib compile

clean:
	@echo "cleaning before compile..."
	@for file_extension in ${DELETE_FILES} ; do \
		echo "removing $$file_extension" ; \
		rm -rf $$file_extension ; \
	done

compile:
	@echo "Compiling ${PROJECT}.tex ..."
	@pdflatex ${PROJECT}.tex

bib:
	@echo "Bib ${PROJECT}.aux ..."
	@bibtex ${PROJECT}.aux
