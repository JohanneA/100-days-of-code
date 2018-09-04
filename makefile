args = `arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`

%:
	@:

commit: log.md
	git add $^
	git commit -m $(call args,defaultstring)
	git push origin master
