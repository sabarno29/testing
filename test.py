import numpy as np

def read_data(file_path):
    return np.loadtxt(file_path)

def process_data(id_table, x_table, y_table, z_table):
    results = []
    for id in id_table:
        if id < len(x_table) and id < len(y_table) and id < len(z_table):
            x = x_table[id]
            y = y_table[id]
            z = z_table[id]
            results.append((id, x, y, z))
    return results

def write_output(file_path, results):
    with open(file_path, 'w') as f:
        for result in results:
            f.write(f"{result[0]} {result[1]} {result[2]} {result[3]}\n")

def main():
    # Load data
    x_data = read_data('input_OxyMx_30A_T1.dat')
    y_data = read_data('input_OxyMy_30A_T1.dat')
    z_data = read_data('input_OxyMz_30A_T1.dat')
    id_table = np.loadtxt('uniqID_allwat_30A_T1.dat', dtype=int)
    
    # Process data
    results = process_data(id_table, x_data, y_data, z_data)
    
    # Write output
    write_output('output.txt', results)

if __name__ == '__main__':
    main()
