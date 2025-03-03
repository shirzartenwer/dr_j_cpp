# Use the official Ubuntu base image
FROM ubuntu:latest

# Install necessary packages
RUN rm -rf /var/lib/apt/lists/* && \
    apt-key adv --keyserver hkp://keyserver.ubuntu.com --recv-keys 3B4FE6ACC0B21F32 || \
    apt-key adv --keyserver hkp://p80.pool.sks-keyservers.net:80 --recv-keys 3B4FE6ACC0B21F32 || \
    apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3B4FE6ACC0B21F32 && \
    apt-get update --allow-releaseinfo-change

# Set the working directory
WORKDIR /usr/src/app

# Copy the entire project into the container
COPY . .

# Compile all C++ files
RUN find . -name "*.cpp" -exec clang++ -o {}.out {} \;

# Default command to run when the container starts
CMD ["bash"]