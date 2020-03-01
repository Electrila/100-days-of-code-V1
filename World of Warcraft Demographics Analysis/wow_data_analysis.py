import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import seaborn as sns

# Import .csv file into DataFrame
wow_data = pd.read_csv('C:/Users/Megann/Documents/Coding/100-days-of-code/World of Warcraft Demographics Analysis/WoW_Demographics.csv')

# Filter wow_data to Server, Class, Race, Role columns
wow_df1 = wow_data[['Server', 'Class', 'Race', 'Role']]

# Split multiple entries within one value and append split values to end of class_df DataFrame
class_df = wow_df1['Class'].apply(lambda x: pd.Series(x.split(';'))).stack(dropna=True).reset_index(drop=True).to_frame('Class')
# Count how many values occur for each class and create new column Class Total to store values
class_df = class_df['Class'].value_counts().to_frame().reset_index().rename(columns={'index': 'Class', 'Class': 'Class Total'})
# 237 total across all classes
print(class_df)

# Split multiple entries within one value and append split values to end of race_df DataFrame
race_df = wow_df1['Race'].apply(lambda x: pd.Series(x.split(';'))).stack(dropna=True).reset_index(drop=True).to_frame('Race')
# Count how many values occur for each class and create new column Race Total to store values
race_df = race_df['Race'].value_counts().to_frame().reset_index().rename(columns={'index': 'Race', 'Race': 'Race Total'})
# 194 total across all races
print(race_df)

# Split multiple entries within one value and append split values to end of role_df DataFrame
role_df = wow_df1['Role'].apply(lambda x: pd.Series(x.split(';'))).stack(dropna=True).reset_index(drop=True).to_frame('Role')
# Count how many values occur for each class and create new column Role Total to store values
role_df = role_df['Role'].value_counts().to_frame().reset_index().rename(columns={'index': 'Role', 'Role': 'Role Total'})
# 151 total across all races
print(role_df)