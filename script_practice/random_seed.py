""" random_seed.py """
import pandas as pd
import numpy as np

seed_val = 123

np.random.seed(seed_val)
data = np.random.randint(0,100, size=100)
# size is number of elements...
# 0 <= number <= 100

def compare(value):
	return "Pass" if value >= 50 else "Fail"

#dataframe df

df = pd.DataFrame(data, columns=['Value'])
# original class DataFrame is (data= ,index= ,columns= ,dtype= , copy) but if you select like above code
# you choose like dict key=value...
df['Test'] = df['Value'].apply(compare)

# python < 3.6 ====> 'str'.foramt(value)
# file_name = 'compare_rendint_{}.csv',format(seed)

# for python --version 3.6
file_name = f'compare_randint_{seed_val}.csv'


df.to_csv(file_name, index=False)
print(df)

