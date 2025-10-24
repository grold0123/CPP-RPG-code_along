import subprocess


args = [
    ['git','add','C:\projects\CPP-RPG-code_along'],#add
    ['git','commit','-m','update'],#commit
    ['git','push'],#push
]

for arg in args:
    subprocess.run(arg)