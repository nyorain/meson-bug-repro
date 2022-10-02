project('buggy', 'cpp')

generated = custom_target(
	'generated.h',
	output: 'generated.h',
	input: files('generated.h.in'),
	command: ['cp', '@INPUT@', '@OUTPUT@']
)

shared_library('blub',
	sources: [files('main.cpp', 'foo.cpp', 'bar.cpp'), generated],
	cpp_pch: 'inc/fwd.hpp')
