###
# Sort integer arguments (ascending)
#
# Arguments:
#   - ARGV: An array of command-line arguments
#
# Returns:
#   - An array of integers in ascending order
###

def sort_arguments(argv)
  result = []
  argv.each do |arg|
    # skip if not an integer
    next unless arg =~ /^-?[0-9]+$/

    # convert to integer
    i_arg = arg.to_i

    # insert result at the right position
    is_inserted = false
    i = 0
    l = result.size
    while !is_inserted && i < l do
      if result[i] < i_arg
        i += 1
      else
        result.insert(i, i_arg)
        is_inserted = true
        break
      end
    end
    result << i_arg unless is_inserted
  end

  result
end

# Sort the arguments passed in from the command line
sorted_arguments = sort_arguments(ARGV)

# Print the sorted arguments
puts sorted_arguments
