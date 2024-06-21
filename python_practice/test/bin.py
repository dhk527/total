import os

os.makedirs("test_filepy",exist_ok=True)

for bin_file in os.listdir():
    if bin_file.endswith(".bin") and os.path.isfile(bin_file):
        output_file = f"test_filepy/{bin_file}.txt"
        os.system(f"xxd {bin_file} > {output_file}")

print("success")
