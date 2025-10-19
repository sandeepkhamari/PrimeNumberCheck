# PrimeNumberCheck

Build:
 rm -rf build/
 mkdir -p build
 cd build

Configuration and generation:
 cmake -S.. -B.
 cmake --build .

install:
 cmake --install . --prefix ./install

 

Create local repo:

git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:sandeepkhamari/PrimeNumberCheck.git
git push -u origin main

Push an existing repository:

git remote add origin git@github.com:sandeepkhamari/PrimeNumberCheck.git
git branch -M main
git push -u origin main
