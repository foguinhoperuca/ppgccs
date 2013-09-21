# GITHUB_FOLDER=~/Dropbox/projects/ufscar/ppgccs/github
GITHUB_FOLDER=$(PWD)/../../
PROJECT=aug_30_2013
DELETE_FILES=${shell cat ${GITHUB_FOLDER}/.gitignore}

all: clean compile bib recompile

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

# FIXME workarround to fix a target that is not run twice.
recompile:
	@echo "Compiling ${PROJECT}.tex ..."
	@pdflatex ${PROJECT}.tex
