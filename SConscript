from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

# add math src files.
if GetDepend('PKG_USING_MATH'):
    src += Glob('src/*.c')

if GetDepend('PKG_USING_MATH_SAMPLE'):
    src += Glob('examples/*.c')

# add math include path.
path  = [cwd + '/inc']

# add src and include to group.
group = DefineGroup('math', src, depend = ['PKG_USING_MATH'], CPPPATH = path)

Return('group')
