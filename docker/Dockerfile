FROM ubuntu:18.04

ENV WORKSPACE_PATH='/workspace'

RUN apt-get update \
    && apt-get install -y \
                gcc \
                make \
                git \
                binutils \
                libc6-dev \
                neovim \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir $WORKSPACE_PATH

RUN mkdir $WORKSPACE_PATH/cb_00_01_ls_dump
COPY cb_00_01_ls_dump/* $WORKSPACE_PATH/cb_00_01_ls_dump/

RUN mkdir $WORKSPACE_PATH/cb_00_02_fourty_two
COPY cb_00_02_fourty_two/* $WORKSPACE_PATH/cb_00_02_fourty_two/

RUN mkdir $WORKSPACE_PATH/cb_00_03_plus
COPY cb_00_03_plus/* $WORKSPACE_PATH/cb_00_03_plus/

RUN mkdir $WORKSPACE_PATH/cb_01_01_single_args
COPY cb_01_01_single_args/* $WORKSPACE_PATH/cb_01_01_single_args/
