import subprocess,os


base_dir = 'C:\projects\CPP-RPG-code_along\repo.py'

args = [
    'g++',
    'src\*.cpp',
    '-L',
    'lib',
    '-I',
    'include',
    '-l',
    'SDL3',
    '-l',
    'SDL3_image',
    '-o',
    'build\RPG.exe'
]

os.system("cls")
subprocess.run(args)

print('\n\nBuild succesful\n\n')
print('Running exe file\n\n')

subprocess.run('build\RPG.exe')
