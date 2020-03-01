import matplotlib.pyplot as plt
import pandas as pd
import numpy as np
import seaborn as sns

# Import .csv file into DataFrame
wow_data = pd.read_csv('C:/Users/Megann/Documents/Coding/100-days-of-code/World of Warcraft Demographics Analysis/WoW_Demographics.csv')

# Filter wow_data to Server, Class, Race, Role columns
wow_df = wow_data[['Server', 'Class', 'Race', 'Role']]
print(wow_df)

# Split multiple entries within one value and append split values to end of class_df DataFrame
class_df = wow_df['Class'].apply(lambda x: pd.Series(x.split(';'))).stack(dropna=True).reset_index(drop=True).to_frame('Class')
# Count how many values occur for each class and create new column Class Total to store values
class_df = class_df['Class'].value_counts().to_frame().reset_index().rename(columns={'index': 'Class', 'Class': 'Class Total'})
# 237 total across all classes
print(class_df)

# Split multiple entries within one value and append split values to end of race_df DataFrame
race_df = wow_df['Race'].apply(lambda x: pd.Series(x.split(';'))).stack(dropna=True).reset_index(drop=True).to_frame('Race')
# Count how many values occur for each class and create new column Race Total to store values
race_df = race_df['Race'].value_counts().to_frame().reset_index().rename(columns={'index': 'Race', 'Race': 'Race Total'})
# 194 total across all races
print(race_df)

# Split multiple entries within one value and append split values to end of role_df DataFrame
role_df = wow_df['Role'].apply(lambda x: pd.Series(x.split(';'))).stack(dropna=True).reset_index(drop=True).to_frame('Role')
# Count how many values occur for each class and create new column Role Total to store values
role_df = role_df['Role'].value_counts().to_frame().reset_index().rename(columns={'index': 'Role', 'Role': 'Role Total'})
# 151 total across all races
print(role_df)

# Create subplot for bar graph
fig, ax = plt.subplots(1, 1, figsize=(15, 10))
# List of colors to apply to bars
colors = ['#FF5733', '#9AE340', '#FA0404', '#FFFFFF', '#F55A5A', '#2D096B', '#54DBAD', '#8BF1E5', '#A78BF1', '#A79B64', '#FEF256', '#1F29F1']
# Plot bar graph, adjust subplot margins and tick params, set title and grid
ax.bar(class_df['Class'], class_df['Class Total'], color=colors, edgecolor='black', alpha=0.6)
plt.subplots_adjust(left=0.12, bottom=0.25, right=0.90, top=0.88, wspace=0.20, hspace=0.20)
ax.tick_params(direction='inout')
ax.set_xticklabels(class_df['Class'], rotation=45, ha='right', fontsize=15)
ax.set_yticklabels([0, 5, 10, 15, 20, 25, 30, 35], fontsize=15)
ax.set_title('Total characters by class', fontsize=20, fontweight='bold', pad=20)
ax.grid(axis='y', alpha=0.5)
ax.set_facecolor('#EDEDEA')
# Render graph
plt.show()
# Clear figure to plot barplot
plt.clf()
plt.cla()
plt.close()

# Create subplot for barplot and format seaborn style
sns.set_style('darkgrid')
sns.set_context('talk')
sns.set(font_scale=1.5)
fig, ax = plt.subplots(1, 1, figsize=(15, 10))
# Plot barplot, adjust subplot margins, set xticks and title, remove x and y labels
sns.barplot(data=race_df, x='Race Total', y='Race', palette='RdBu')
ax.set_xticks([0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50])
plt.title('Total characters by race', fontsize=20, fontweight='bold', pad=20)
ax.set_xlabel('')
ax.set_ylabel('')
# Render graph
plt.show()