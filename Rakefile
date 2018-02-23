require "bundler/gem_tasks"
require "rspec/core/rake_task"
require "rake/extensiontask"

spec = Gem::Specification.load("gem_ext.gemspec")
Gem::PackageTask.new(spec)
Rake::ExtensionTask.new("gem_ext", spec) do |ext|
  ext.lib_dir = "lib/gem_ext"
end

RSpec::Core::RakeTask.new(:spec)
task :default => [:compile, :spec]
