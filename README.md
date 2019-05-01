# lowlevel-study
make C compiler, written by C, Assembly

## development

```bash
$ docker build -t lowlevel-study:latest -f docker/Dockerfile .
$ docker run -it lowlevel-study:latest /bin/bash
```

## references
- [コンパイラ作りの魅力を語る - DQNEO](https://speakerdeck.com/dqneo/making-compilers-is-fun)
- [低レイヤを知りたい人のためのCコンパイラ作成入門 - Rui Ueyama](https://www.sigbus.info/compilerbook)
