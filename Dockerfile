# ベースイメージとしてUbuntu 22.04を指定
FROM ubuntu:22.04

# 環境変数を設定し、apt-getが対話形式にならないようにする
ENV DEBIAN_FRONTEND=noninteractive

# パッケージリストを更新し、C++開発に必要なツールをインストール
RUN apt-get update && apt-get install -y \
    build-essential \
    gcc \
    g++ \
    clang \
    cmake \
    gdb \
    git \
    vim \
    && rm -rf /var/lib/apt/lists/*

# 作業ディレクトリを作成し、設定
WORKDIR /app